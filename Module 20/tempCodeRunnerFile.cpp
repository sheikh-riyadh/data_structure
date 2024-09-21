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

void check_is_tree_are_same(Node *root, int rootSequence)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        if (rootSequence == 1)
        {
            v1.push_back(parent->value);

            if (parent->left && parent->right)
            {
                v1.push_back(parent->left->value);
                v1.push_back(parent->right->value);
            }
            else if (parent->left == NULL && parent->right)
            {
                v1.push_back(0);
                v1.push_back(parent->right->value);
            }
            else if (parent->right == NULL && parent->left)
            {
                v1.push_back(parent->left->value);
                v1.push_back(0);
            }
            else
            {
                v1.push_back(0);
            }
        }
        if (rootSequence == 2)
        {
            v2.push_back(parent->value);
            if (parent->left && parent->right)
            {
                v2.push_back(parent->left->value);
                v2.push_back(parent->right->value);
            }
            else if (parent->left == NULL && parent->right)
            {
                v2.push_back(0);
                v2.push_back(parent->right->value);
            }
            else if (parent->right == NULL && parent->left)
            {
                v2.push_back(parent->left->value);
                v2.push_back(0);
            }
            else
            {
                v2.push_back(0);
            }
        }

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

int main()
{
    int lvl = 0;
    Node *root = input_tree();
    check_is_tree_are_same(root, 1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}