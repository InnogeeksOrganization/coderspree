#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Node
{
public:
    int data = 0;

    vector<Node *> children;
    Node(int data)
    {
        this->data = data;
    }
};
Node *constructor01(vector<int> &arr)
{
    if (arr.size() == 0)
        return NULL;

    vector<Node *> stack;
    stack.push_back(new Node(arr[0]));

    Node *root = stack[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != -1)
        {
            Node *node = stack.back();
            Node *nnode = new Node(arr[i]);

            node->children.push_back(nnode);
            stack.push_back(nnode);
        }
        else
            stack.pop_back();
    }
    return root;
}
void levelOderZigZag(Node *node)
{
    // queue<Node*> q;
    vector<Node *> q;
    q.push_back(node);
    int count = 0;
    while (!q.empty())
    {
        if (count % 2 == 0)
            for (auto i : q)
                cout << i->data << " ";
        else
            for (int i = q.size() - 1; i >= 0; i--)
                cout << q[i]->data << " ";
        // queue<Node*> n;
        vector<Node *> n;
        for (auto i : q)
            for (auto j : i->children)
                n.push_back(j);
        count++;
        cout << endl;
        q = n;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root = constructor01(arr);
    levelOderZigZag(root);
}

int main()
{
    solve();
    return 0;
}
