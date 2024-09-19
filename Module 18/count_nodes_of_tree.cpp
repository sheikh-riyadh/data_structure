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
    Node *root;
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        Node *myLeft = NULL, *myRight = NULL;
        int l, r;
        cin >> l >> r;
        if (l != -1)
            myLeft = new Node(l);
        if (r != -1)
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}

int main()
{

    Node *root = input_tree();
    cout << count(root);
    return 0;
}