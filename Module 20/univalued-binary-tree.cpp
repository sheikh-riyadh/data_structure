#include <bits/stdc++.h>
using namespace std;
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

void check_is_same(Node *root, int v, bool &flag)
{
    if (root == NULL)
        return;
    if (root->value != v)
    {
        flag = false;
        return;
    }
    check_is_same(root->left, v, flag);
    check_is_same(root->right, v, flag);
}

int main()
{
    bool flag = true;
    Node *root = input_tree();
    check_is_same(root, root->value, flag);
    if (flag)
        cout << "True";
    else
        cout << "False";

    return 0;
}