#include <bits/stdc++.h>

using namespace std;

int prec(char c)
{
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

bool isOperand(char c)
{
    return (c >= 'a' && c <= 'z');
}

string postfix(string s)
{
    stack<char> st;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        else if (isOperand(s[i]))
            ans += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

string prefix(string s)
{
    string c = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '(')
            c += ')';
        else if (s[i] == ')')
            c += '(';
        else
            c += s[i];
    }
    s = c;
    stack<char> st;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        else if (isOperand(s[i]))
            ans += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    c = ans;

    s = "";
    for (int i = c.size() - 1; i >= 0; i--)
    {
        if (c[i] == '(')
            s += ')';
        else if (c[i] == ')')
            s += '(';
        else
            s += c[i];
    }
    return s;
}

int main()
{
    string str;
    getline(cin, str);

    cout << postfix(str) << "\n"
         << prefix(str) << endl;

    return 0;
}