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
    int v;
    cin >> v;
    if (v != -1)
        root = new Node(v);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_left = NULL, *my_right = NULL;
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

void view_left_tree(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    bool frq[305] = {false};

    queue<pair<Node *, int>> q;
    q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        Node *node = parent.first;
        int lavel = parent.second;

        if (!frq[lavel])
        {
            v.push_back(node->value);
            frq[lavel] = true;
        }

        if (node->left)
            q.push({node->left, lavel + 1});
        if (node->right)
            q.push({node->right, lavel + 1});
    }
}

int main()
{
    vector<int> v;
    Node *root = input_tree();
    view_left_tree(root, v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}