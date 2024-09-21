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
    int v;
    cin >> v;

    if (v == -1)
        return NULL;

    Node *root = new Node(v);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            parent->left = new Node(l);
            q.push(parent->left);
        }

        if (r != -1)
        {
            parent->right = new Node(r);
            q.push(parent->right);
        }
    }

    return root;
}

void leftOuter(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        leftOuter(root->left);
    }
    else if (root->right)
    {
        leftOuter(root->right);
    }
    cout << root->value << " ";
};

void rightOuter(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->value << " ";

    if (root->right)
    {
        rightOuter(root->right);
    }
    else if (root->left)
    {
        rightOuter(root->left);
    }
}

void leftAndRightOuter(Node *root)
{
    if (root == NULL)
        return;
    leftOuter(root->left);
    cout << root->value << " ";
    rightOuter(root->right);
}

int main()
{
    Node *root = input_tree();
    if (root->left == NULL && root->right != NULL)
    {
        rightOuter(root);
    }
    else if (root->left != NULL && root->right == NULL)
    {
        leftOuter(root);
    }
    else if (root->left != NULL && root->right != NULL)
    {
        leftAndRightOuter(root);
    }
    else if (root->left == NULL && root->right == NULL)
    {
        cout << root->value << " ";
    }

    return 0;
}
