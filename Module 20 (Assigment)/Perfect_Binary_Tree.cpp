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

void perfect_binary_tree(Node *root)
{
    int totalNode = 0;
    int totalLevel = 0;
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *parent = pr.first;
        int level = pr.second;
        q.pop();
        if (parent->value)
        {
            totalNode += 1;
            totalLevel = level;
        }
        if (parent->left)
            q.push({parent->left, level + 1});
        if (parent->right)
            q.push({parent->right, level + 1});
    }

    int result = pow(2, totalLevel) - 1;
    if (result == totalNode)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *root = input_tree();

    perfect_binary_tree(root);

    return 0;
}
