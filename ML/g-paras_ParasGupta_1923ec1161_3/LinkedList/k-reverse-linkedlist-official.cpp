#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(struct Node *head)
{
    while (head)
    {
        cout << head->data;
        head = head->next;
        if (head)
            cout << "->";
        else
            cout << "\n";
    }
}

struct Node *reversek(struct Node *head, int k)
{
    struct Node *prev = NULL;
    struct Node *cur = head;
    struct Node *next;

    int count = 0;
    while (cur != NULL && count < k)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        count++;
    }

    if (next)
        head->next = reversek(next, k);
    return prev;
}

int main()
{
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    display(head);

    struct Node *rev = reversek(head, 3);
    display(rev);

    return 0;
}