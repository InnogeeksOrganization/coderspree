#include <bits/stdc++.h>
#include <iostream>
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

int c = INT_MAX;
int flloor = INT_MIN;

void cnf(Node *node, int data)
{
    if (node->data > data)
        c = min(c, node->data);
    if (node->data < data)
        flloor = max(flloor, node->data);
    for (auto child : node->children)
        cnf(child, data);
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
    int data;
    cin >> data;
    Node *root = construct(arr, n);
    cnf(root, data);
    cout << "CEIL = " << c << endl;
    cout << "FLOOR = " << flloor << endl;
}