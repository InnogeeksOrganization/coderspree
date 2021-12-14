#include <iostream>
#include <vector>
using namespace std;

void gssh(vector<string> &ans, string input, string output)
{
    if (input == "")
    {
        ans.push_back(output);
        return;
    }
    gssh(ans, input.substr(1), output);
    gssh(ans, input.substr(1), output + input[0]);
}

vector<string> gss(string s)
{
    vector<string> ans;
    gssh(ans, s, "");
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
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