#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int c = INT_MAX;
int flloor = INT_MIN;

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

bool areMirror(Node *n1, Node *n2)
{
    if (n1->children.size() != n2->children.size())
        return false;
    int n = n1->children.size();
    for (int i = 0; i < n; i++)
    {
        if (!areMirror(n1->children[i], n2->children[n - i - 1]))
            return false;
    }
    return true;
}

bool issym(Node *node)
{
    return areMirror(node, node);
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
    Node *root = construct(arr, n);
    bool sym = issym(root);
    if (sym == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}