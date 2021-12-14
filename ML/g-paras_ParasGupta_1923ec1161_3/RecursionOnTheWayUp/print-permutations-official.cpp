#include <iostream>
using namespace std;

void swap(string &s, int i, int j)
{
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void printPermutations(string str, string asf)
{
    if (str == "")
    {
        cout << asf << endl;
        return;
    }
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        swap(str, 0, i);
        printPermutations(str.substr(1), asf + str[0]);
    }
}

int main()
{
    string str;
    cin >> str;
    printPermutations(str, "");
}