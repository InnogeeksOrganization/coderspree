#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;
}

bool isOperand(char c)
{
    return (c >= '0' && c <= '9');
}

int eval(string exp)
{
    stack<int> st;
    for (int i = 0; i < exp.size(); i++)
    {
        if (isOperand(exp[i]))
            st.push(exp[i] - '0');
        else
        {
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            st.push(calc(val1, val2, exp[i]));
        }
    }
    return st.top();
}

string infix(string exp)
{
    stack<string> st;
    for (int i = 0; i < exp.size(); i++)
    {
        if (isOperand(exp[i]))
            st.push(exp[i] + "");
        else
        {
            int str = st.top() + ")";
            st.pop();
            str = "(" + st.top() + exp[i] + str;
            st.pop();
            st.push(str);
        }
    }
    return st.top();
}

int main()
{
    string exp;
    getline(cin, exp);
    cout << eval(exp) << endl;
    return 0;
}