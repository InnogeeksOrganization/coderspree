#include <bits/stdc++.h>
using namespace std;

char opening(char c)
{
    if (c == ')')
        return '(';
    else if (c == ']')
        return '[';
    else if (c == '}')
        return '{';
}

int main(int argc, char **argv)
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (auto i : s)
    {
        if (i == '(' || i == '[' || i == '{')
            st.push(i);
        else if (i == ')' || i == ']' || i == '}')
        {
            if (!st.empty() && opening(i) != st.top())
            {
                // cout << i << endl;
                cout << "false" << endl;
                return 0;
            }
            st.pop();
        }
    }
    if (st.empty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}