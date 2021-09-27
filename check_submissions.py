import os
from pathlib import Path
from typing import List
from mdutils.fileutils.fileutils import MarkDownFile
from mdutils.mdutils import MdUtils
from mdutils import Html
import requests


home = os.path.abspath(Path(__file__).parent)

submission_architecture = {
    "GettingStarted": 5,
    "Patterns": 2,
    "FunctionsAndArrays": 10
}

domains = ["AR-VR", "IOT", "ML", "Android", "Web"]


class Student:
    def __init__(self, name, githubID, lilbraryid, domain):
        self.name = name
        self.githubID = githubID
        self.libraryid = lilbraryid
        self.solved = 0
        self.domain = domain
        self.completed = True
        self.logs = ""
        self.fetch_img_url()

    def add_questions_solved(self, count):
        self.solved += count

    def __repr__(self) -> str:
        return f"""
            Name: {self.name}
            GitHubID: {self.githubID}
            LibraryID: {self.libraryid}
            Domain: {self.domain}
            Questions Solved: {self.solved}
        """

    def log_value(self, val):
        self.logs += val

    def fetch_img_url(self):
        resp = requests.get(url=f"https://api.github.com/users/{self.githubID}")
        data = resp.json()
        try:
            self.url = data["avatar_url"] + "&s=100"
        except KeyError:
            self.url = "https://avatars.githubusercontent.com/u/84376218?v=4&s=100"


def check_structure(path, student: Student):
    folderName = os.listdir(path)
    for key, value in submission_architecture.items():
        if key in folderName:
            solved = len(os.listdir(os.path.join(path, key)))
            if solved < value:
                student.completed = False

            student.add_questions_solved(solved)
            student.log_value(
                f"Completed `{solved}` with minimum `{value}` in `{key}`, "
            )
        else:
            student.completed = False
            student.log_value(f"`{key}` Folder not found, ")


def write_to_readme(filename, students_list):

    mdFile = MdUtils(file_name=filename, title="Coderspree")

    mdFile.new_line()
    mdFile.new_paragraph(
        "Minimum problems to complete | "
        + "".join(f"**{key}**: `{value}` | " for key, value in submission_architecture.items())
    )

    list_of_strings = ["Profile", "Name", "Domain", "Solved"]

    cols_count = len(list_of_strings)
    mdFile.new_line()

    for x in range(len(students_list)):
        student = students_list[x]
        list_of_strings.extend(
            [
                mdFile.new_inline_image(
                    text=student.name,
                    path=student.url,
                ),
                student.name,
                student.domain,
                str(student.solved),
            ]
        )

    mdFile.new_header(level=1, title="Stats")
    mdFile.new_line()
    mdFile.new_table(
        columns=cols_count,
        rows=len(students_list) + 1,
        text=list_of_strings,
        text_align="center",
    )

    mdFile.create_md_file()


def write_to_pendingReadme(filename, students_list):

    mdFile = MdUtils(file_name=filename, title="Coderspree")

    list_of_strings = ["Profile", "Name", "Domain", "Solved", "logs"]

    cols_count = len(list_of_strings)
    mdFile.new_line()

    for x in range(len(students_list)):
        student = students_list[x]
        list_of_strings.extend(
            [
                mdFile.new_inline_image(
                    text=student.name,
                    path=student.url,
                ),
                student.name,
                student.domain,
                str(student.solved),
                student.logs,
            ]
        )

    mdFile.new_line()
    mdFile.new_table(
        columns=cols_count,
        rows=len(students_list) + 1,
        text=list_of_strings,
        text_align="center",
    )

    mdFile.create_md_file()


completed_student_list: List[Student] = []
incompleted_student_list: List[Student] = []

for domain in domains:
    for filename in os.listdir(os.path.join(home, domain)):
        [githubid, name, lidID] = filename.split("_")
        student = Student(name, githubid, lidID, domain)
        check_structure(os.path.join(home, os.path.join(domain, filename)), student)
        if student.completed:
            completed_student_list.append(student)
        else:
            incompleted_student_list.append(student)

incompleted_student_list.sort(key=lambda x: x.solved)
completed_student_list.sort(key=lambda x: x.solved, reverse=True)

write_to_readme("README.md", completed_student_list)
write_to_pendingReadme("PendingStudents.md", incompleted_student_list)

# for i in completed_student_list:
#     print(i.logs)
#     print(i)


# for i in incompleted_student_list:
#     print(i)
#     print(i.logs)
