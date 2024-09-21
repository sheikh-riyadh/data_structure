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
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        if (parent->left && parent->right)
        {
            sum = parent->left->value + parent->right->value;
            if (v == sum)
                flag = true;
        }

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

int main()
{
    bool flag = false;
    Node *root = input_tree();
    check_is_same(root, root->value, flag);
    if (flag)
        cout << "True";
    else
        cout << "False";

    return 0;
}