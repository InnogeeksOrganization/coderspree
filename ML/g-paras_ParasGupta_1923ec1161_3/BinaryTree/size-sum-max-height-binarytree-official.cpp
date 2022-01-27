#include <iostream>
#include <climits>
#include <string.h>
#include <vector>

using namespace std;

// structure of node
class Node
{
public:
    int data;
    Node *left = nullptr;
    Node *right = nullptr;
    Node(int data)
    {
        this->data = data;
    }
};

class Pair
{
public:
    Node *node = nullptr;
    int state = 0;

    Pair(Node *node, int state)
    {
        this->node = node;
        this->state = state;
    }
};

int idx = 0;
Node *constructTree(vector<int> &arr)
{

    if (idx == arr.size() || arr[idx] == -1)
    {
        idx++;
        return nullptr;
    }
    Node *node = new Node(arr[idx++]);
    node->left = constructTree(arr);
    node->right = constructTree(arr);
    return node;
}

void display(Node *node)
{
    if (node == nullptr)
        return;
    string str = "";
    str += node->left != nullptr ? to_string(node->left->data) : ".";
    str += " <- " + to_string(node->data) + " -> ";
    str += node->right != nullptr ? to_string(node->right->data) : ".";
    cout << str << endl;

    display(node->left);
    display(node->right);
}

int size(Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + size(node->left) + size(node->right);
}

int height(Node *node)
{
    if (node == NULL)
        return -1;
    return 1 + max(height(node->left), height(node->right));
}

int maximum(Node *node)
{
    if (node == NULL)
        return INT_MIN;
    int q = node->data;
    int l = maximum(node->left);
    int r = maximum(node->right);
    if (l > q)
        q = l;
    if (r > q)
        q = r;
    return q;
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;
    return root->data + sum(root->left) + sum(root->right);
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        if (temp == "n")
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = stoi(temp);
        }
    }

    Node *root = constructTree(arr);

    int sz = size(root);
    int sm = sum(root);
    int max = maximum(root);
    int ht = height(root);
    cout << sz << endl;
    cout << sm << endl;
    cout << max << endl;
    cout << ht << endl;
}