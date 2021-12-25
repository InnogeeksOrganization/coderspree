#include <iostream>
#include <exception>
using namespace std;

class DynamicQueue
{
public:
    int *arr;
    int sizeQ;
    int front;
    int arrSize;

    DynamicQueue(int cap)
    {
        sizeQ = 0;
        front = 0;
        arr = new int[cap];
        arrSize = cap;
    }

    int size()
    {
        return this->sizeQ;
    }

    void add(int data)
    {
        if (this->sizeQ == this->arrSize || this->front >= this->arrSize)
        {
            this->arrSize *= 2;
            this->arr = (int *)realloc(this->arr, (this->arrSize) * sizeof(int));
        }
        this->arr[this->front + this->sizeQ++] = data;
    }

    int peek()
    {
        if (this->sizeQ != 0)
            return this->arr[this->front];
        else
            cout << "Queue underflow" << endl;
        return -1;
    }

    int remove()
    {
        if (this->sizeQ == 0)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        this->sizeQ--;
        return this->arr[this->front++];
    }

    void display()
    {
        for (int i = this->front; i < this->front + this->sizeQ; i++)
        {
            cout << this->arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    int n;
    cin >> n;
    DynamicQueue q(n);
    string str;
    cin >> str;

    while (str != "quit")
    {
        if (str == "add")
        {
            int val;
            cin >> val;
            q.add(val);
        }
        else if (str == "remove")
        {
            int val = q.remove();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "peek")
        {
            int val = q.peek();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "size")
        {
            cout << q.size() << endl;
        }
        else if (str == "display")
        {
            q.display();
        }
        cin >> str;
    }
    return 0;
}
