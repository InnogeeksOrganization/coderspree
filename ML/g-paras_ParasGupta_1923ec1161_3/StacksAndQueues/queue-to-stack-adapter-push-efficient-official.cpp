#include <iostream>
#include <exception>
#include <queue>
using namespace std;

class QueueToStackAdapter
{
public:
    queue<int> mainQ;
    queue<int> helperQ;

    int size()
    {
        return mainQ.size();
    }

    void push(int data)
    {
        mainQ.push(data);
    }

    int top()
    {
        if (mainQ.size() == 0)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        while (mainQ.size() > 1)
        {
            int temp = mainQ.front();
            mainQ.pop();
            helperQ.push(temp);
        }
        int t = mainQ.front();
        mainQ.pop();
        helperQ.push(t);
        while (helperQ.size() > 0)
        {
            int temp = helperQ.front();
            helperQ.pop();
            mainQ.push(temp);
        }
        return t;
    }

    int pop()
    {
        if (mainQ.size() == 0)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        while (mainQ.size() > 1)
        {
            int temp = mainQ.front();
            mainQ.pop();
            helperQ.push(temp);
        }
        int t = mainQ.front();
        mainQ.pop();
        while (helperQ.size() > 0)
        {
            int temp = helperQ.front();
            helperQ.pop();
            mainQ.push(temp);
        }
        return t;
    }
};

int main()
{
    QueueToStackAdapter st;
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
        cin >> str;
    }
    return 0;
}