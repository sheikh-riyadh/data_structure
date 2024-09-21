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

void level_order(Node *root, vector<int> &v, int x)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *parent = pr.first;
        int level = pr.second;
        q.pop();

        if (level == x)
        {
            v.push_back(parent->value);
        }

        if (parent->left)
            q.push({parent->left, level + 1});
        if (parent->right)
            q.push({parent->right, level + 1});
    }
}

int main()
{
    vector<int> v;
    Node *root = input_tree();
    int x;
    cin >> x;
    level_order(root, v, x);

    if (v.size())
    {
        for (int node : v)
        {
            cout << node << " ";
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}