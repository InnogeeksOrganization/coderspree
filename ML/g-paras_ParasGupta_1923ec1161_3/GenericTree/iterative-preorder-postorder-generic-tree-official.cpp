#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;
};

void iterativePreAndPostOrder(Node *root)
{
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *temp = st.top();
        st.pop();
        cout << temp->data << " ";
        for (int i = temp->children.size() - 1; i >= 0; i--)
            st.push(temp->children[i]);
    }
    cout << endl;

    stack<Node *> st1;
    stack<int> st2;
    st1.push(root);
    while (!st1.empty())
    {
        Node *temp = st1.top();
        st1.pop();
        st2.push(temp->data);
        for (auto child : temp->children)
            st1.push(child);
    }
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;
}

Node *construct(vector<int> &arr)
{
    Node *root = nullptr;

    stack<Node *> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

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

int main()
{
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    Node *root = construct(arr);
    iterativePreAndPostOrder(root);
}