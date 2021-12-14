#include <iostream>
#include <string>
using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

void printEncoding(string str, string asf)
{
    if (str == "")
    {
        cout << asf << endl;
        return;
    }
    int n = str[0] - '0';
    if (n)
    {
        printEncoding(str.substr(1), asf + alphabet[n - 1]);
    }
    if (str.length() > 1 && str[0] != '0')
    {
        n = stoi(str.substr(0, 2));
        if (n <= 26)
            printEncoding(str.substr(2), asf + alphabet[n - 1]);
    }
}

int main()
{
    string str;
    cin >> str;
    printEncoding(str, "");
}