#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> getKPC(string s)
{
    vector<string> pair = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    vector<string> ans;
    int n = s[0] - '0'; // char to integer
    if (s.length() == 1)
    {
        for (auto i : pair[n])
        {
            string x(1, i); // char to string
            ans.push_back(x);
        }
        return ans;
    }
    for (auto i : pair[n])
        for (auto j : getKPC(s.substr(1)))
        {
            ans.push_back(i + j);
        }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}