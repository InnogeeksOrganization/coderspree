#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    vector<Node *> children;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    return temp;
}

Node *construct(int arr[], int n)
{
    Node *root = NULL;
    stack<Node *> st;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = newNode(arr[i]);

            if (st.size() > 0)
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }
    return root;
}

Node *pre;
Node *suc;
int state = 0;

void prnsc(Node *node, int data)
{
    if (state == 0)
    {
        if (node->data == data)
            state = 1;
        else
            pre = node;
    }
    else if (state == 1)
    {
        suc = node;
        state = 2;
    }
    for (auto child : node->children)
        prnsc(child, data);
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int val;
    cin >> val;
    Node *root = construct(arr, n);
    prnsc(root, val);
    if (pre == NULL)
    {
        cout << "Predecessor = Not found" << endl;
    }
    else
    {
        cout << "Predecessor = " << pre->data << endl;
    }

    if (suc == NULL)
    {
        cout << "Successor = Not found";
    }
    else
    {
        cout << "Successor = " << suc->data;
    }
}