#include <iostream>
#include <exception>
using namespace std;

class Stack
{

public:
    int *arr;
    int tos;
    int MaxCapacity;

public:
    Stack(int size)
    {
        this->MaxCapacity = size;
        this->arr = new int[this->MaxCapacity];
        this->tos = -1;
    }

public:
    Stack()
    {
        Stack(10);
    }

public:
    int size()
    {
        return this->tos + 1;
    }

public:
    void push(int data)
    {
        if (this->tos == this->MaxCapacity - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        this->arr[++this->tos] = data;
    }

public:
    int top()
    {
        if (this->tos != -1)
            return this->arr[this->tos];
        else
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }

public:
    int pop()
    {
        if (this->tos != -1)
        {
            return this->arr[this->tos--];
        }
        cout << "Stack underflow" << endl;
        return -1;
    }

public:
    void display()
    {
        for (int i = this->tos; i >= 0; i--)
            cout << this->arr[i] << " ";
        cout << "\n";
    }
};

int main()
{
    int n;
    cin >> n;
    Stack st(n);
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
        else if (str == "display")
        {
            st.display();
        }
        cin >> str;
    }
}