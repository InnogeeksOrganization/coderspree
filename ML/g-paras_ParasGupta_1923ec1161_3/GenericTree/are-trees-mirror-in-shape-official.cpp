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

void display(Node *node)
{
    string s = "";
    s += to_string(node->data) + " Child: ";
    for (Node *child : node->children)
    {
        s += to_string(child->data) + ", ";
    }

    cout << s << "." << endl;

    for (Node *child : node->children)
    {
        display(child);
    }
}

Node *constructor01(vector<int> arr)
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

int sizeRec(Node *node)
{
    int size = 0;
    for (Node *child : node->children)
    {
        size += sizeRec(child);
    }
    return size + 1;
}

int maxEle(Node *node)
{
    int OverMax = node->data;
    for (Node *child : node->children)
    {
        OverMax = max(OverMax, maxEle(child));
    }
    return OverMax;
}

int height(Node *node)
{
    int ht = 0;
    for (Node *child : node->children)
    {
        ht = max(ht, height(child));
    }
    return ht + 1;
}

bool areSimilar(Node *n1, Node *n2)
{
    if (n1->children.size() != n2->children.size())
        return false;
    int n = n1->children.size();
    for (int i = 0; i < n; i++)
    {
        if (!areSimilar(n1->children[i], n2->children[n - i - 1]))
            return false;
    }
    return true;
}

void solve()
{
    int n1;
    cin >> n1;
    vector<int> arr1(n1, 0);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    Node *root1 = constructor01(arr1);

    int n2;
    cin >> n2;
    vector<int> arr2(n2, 0);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    Node *root2 = constructor01(arr2);

    bool similar = areSimilar(root1, root2);
    if (similar == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{
    solve();
    return 0;
}