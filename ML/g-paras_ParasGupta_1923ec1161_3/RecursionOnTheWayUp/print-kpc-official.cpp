#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf)
{
    if (ques == "")
    {
        cout << asf << endl;
        return;
    }
    int n = ques[0] - '0';
    for (auto i : codes[n])
    {
        printKPC(ques.substr(1), asf + i);
    }
}

int main()
{
    string str;
    cin >> str;
    printKPC(str, "");
}