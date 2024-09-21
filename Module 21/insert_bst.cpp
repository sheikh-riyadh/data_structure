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
    queue<Node *> q;
    Node *root = NULL;
    int based;
    cin >> based;
    if (based != -1)
        root = new Node(based);
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

void insert_bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    else if (root->value > x)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_bst(root->right, x);
        }
    }
}

int main()
{

    return 0;
}