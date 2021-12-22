#include <bits/stdc++.h>
#include <ctype.h>
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
    return (c >= '0' && c <= '9');
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

int calc(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else if (c == '*')
        return a * b;
    else if (c == '/')
        return a / b;
}

int eval(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isOperand(s[i]))
            st.push(s[i] - '0');
        else
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            // cout << second << " " << s[i] << " " << first << " " << calc(first, second, s[i])<< endl;
            st.push(calc(second, first, s[i]));
        }
    }
    return st.top();
}

int main()
{
    string str;
    getline(cin, str);

    cout << eval(postfix(str)) << endl;

    return 0;
}