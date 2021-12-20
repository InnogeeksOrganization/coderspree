#include <iostream>
#include <string>
#include <stack>

using namespace std;

class MinStack
{
    stack<int> data;
    int minVal;

public:
    int size()
    {
        return data.size();
    }

public:
    void push(int val)
    {
        if (data.empty())
        {
            data.push(val);
            minVal = val;
        }
        else if (val < minVal)
        {
            data.push(val + val - minVal);
            minVal = val;
        }
        else
        {
            data.push(val);
        }
    }

public:
    int pop()
    {
        if (data.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        else if (data.top() > minVal)
        {
            int temp = data.top();
            data.pop();
            return temp;
        }
        else
        {
            int oval = minVal;
            minVal = 2 * minVal - data.top();
            data.pop();
            return oval;
        }
    }

public:
    int top()
    {
        if (data.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        else if (data.top() > minVal)
            return data.top();
        else
            return minVal;
    }

public:
    int min()
    {
        if (data.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return minVal;
    }
};

int main()
{
    MinStack st;

    string str;
    cin >> str;

    while (str != "quit")
    {

        if (str == "push")
        {
            int val;
            cin >> val;
            st.push(val);
        }
        else if (str == "pop")
        {
            int val = st.pop();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "top")
        {
            int val = st.top();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "size")
        {
            cout << st.size() << endl;
        }
        else if (str == "min")
        {
            int val = st.min();
            if (val != -1)
            {
                cout << val << endl;
            }
        }

        cin >> str;
    }
}