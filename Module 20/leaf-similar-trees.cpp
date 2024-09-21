#include <bits/stdc++.h>
using namespace std;

vector<int> v1, v2;

class Node
{
public:
    int value;
    Node *left, *right;
    Node(int value)
    {
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }
};

Node *input_tree()
{
    Node *root = NULL;
    queue<Node *> q;
    int v;
    cin >> v;
    if (v != -1)
        root = new Node(v);
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        Node *my_left = NULL, *my_right = NULL;
        int l, r;
        cin >> l >> r;
        if (l != -1)
            my_left = new Node(l);
        if (r != -1)
            my_right = new Node(r);

        parent->left = my_left;
        parent->right = my_right;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    return root;
}

void pre_order(Node *root, int rootSerial)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        if (rootSerial == 1)
        {
            v1.push_back(root->value);
        }
        else if (rootSerial == 2)
        {
            v2.push_back(root->value);
        }
    }
    pre_order(root->left, rootSerial);
    pre_order(root->right, rootSerial);
}

int main()
{
    bool flag = false;
    Node *root = input_tree();
    pre_order(root, 1);
    pre_order(root, 2);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    return 0;
}