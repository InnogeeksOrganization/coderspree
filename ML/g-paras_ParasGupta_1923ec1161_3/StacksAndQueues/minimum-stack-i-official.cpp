#include <iostream>
#include <string>
#include <stack>

using namespace std;

int minimum(int a, int b)
{
    return a > b ? b : a;
}

class MinStack
{

    stack<int> allData;
    stack<int> minData;

public:
    int size()
    {
        return allData.size();
    }

public:
    void push(int val)
    {
        if (allData.empty())
        {
            allData.push(val);
            minData.push(val);
        }
        else
        {
            allData.push(val);
            int m = minimum(val, minData.top());
            minData.push(m);
        }
    }

public:
    int pop()
    {
        if (allData.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        int temp = allData.top();
        allData.pop();
        minData.pop();
        return temp;
    }

public:
    int top()
    {
        if (allData.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return allData.top();
    }

public:
    int min()
    {
        if (minData.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return minData.top();
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