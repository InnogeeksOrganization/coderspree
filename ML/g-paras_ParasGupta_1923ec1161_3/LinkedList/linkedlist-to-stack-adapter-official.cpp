#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
};

class LinkedList
{
public:
    node *head = nullptr;
    node *tail = nullptr;
    int size_ = 0;

    void insert_at_tail(int val)
    {
        if (head == NULL)
        {
            node *newnode = new node;
            newnode->val = val;
            newnode->next = NULL;
            head = newnode;
        }
        else
        {
            node *newnode = new node;
            newnode->val = val;
            newnode->next = NULL;
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void insertion_at_head(int val)
    {
        node *newnode = new node;
        newnode->val = val;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void print()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "0" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deletion_at_head()
    {
        if (head == NULL)
            return;
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void deletion_at_tail()
    {
        if (head == NULL)
            return;
        node *previous = NULL;
        node *temp = head;
        while (temp->next != NULL)
        {
            previous = temp;
            temp = temp->next;
        }
        previous->next = NULL;
        delete temp;
    }

    void last()
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
        // return temp->val;
    }
    int size()
    {
        int cnt = 0;
        node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    int first()
    {
        return head->val;
    }

    node *getAt(int p)
    {
        int cnt = 0;
        node *temp = head;
        while (cnt < p)
        {
            cnt++;
            temp = temp->next;
        }
        cout << temp->val << endl;
        return temp;
    }

    void addAt(int pos, int data)
    {
        if (pos == 0)
        {
            insertion_at_head(data);
            return;
        }
        node *newnode = new node;
        newnode->val = data;
        int cnt = 0;
        node *temp = head;
        while (cnt < pos - 1)
        {
            cnt++;
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void removeAt(int pos)
    {
        if (pos == 0)
        {
            deletion_at_head();
            return;
        }
        int cnt = 0;
        node *temp = head;
        while (cnt < pos - 1)
        {
            cnt++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    void reverse_di()
    {
        int left = 0;
        int right = size() - 1;
        while (left < right)
        {
            node *templ = getAt(left);
            node *tempr = getAt(right);

            int temp = templ->val;
            templ->val = tempr->val;
            tempr->val = temp;
            left++;
            right--;
        }
    }
    void reverse_pi()
    {
        if (size() <= 1)
        {
            return;
        }

        node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        tail = t;

        node *prev = nullptr;
        node *curr = head;
        while (curr != nullptr)
        {
            node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        node *temp = head;

        head = tail;
        tail = temp;
    }
};

class LLToStackAdapter
{
public:
    LinkedList l1;

    int size1()
    {
        return l1.size();
    }
    void push(int val)
    {
        l1.insertion_at_head(val);
    }
    int pop()
    {
        if (l1.size() > 0)
        {
            int data = l1.first();
            l1.deletion_at_head();
            return data;
        }
        else
            cout << "Stack Underflow" << endl;
        return -1;
    }
    int top()
    {
        if (l1.size() > 0)
            return l1.first();
        else
            cout << "Stack Underflow" << endl;
        return -1;
    }
};
int main()
{
    LLToStackAdapter l1;
    string s;
    cin >> s;
    while (s != "quit")
    {
        if (s == "push")
        {
            int val;
            cin >> val;
            l1.push(val);
        }
        else if (s == "pop")
        {
            int val = l1.pop();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "top")
        {
            int val = l1.top();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (s == "size")
        {
            cout << l1.size1() << endl;
        }
        cin >> s;
    }
}