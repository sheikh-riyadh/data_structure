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

void leaf_nodes(Node *root, vector<int> &leaves)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->value);
        return;
    }

    leaf_nodes(root->left, leaves);
    leaf_nodes(root->right, leaves);
}

int main()
{
    vector<int> leafNodes;
    Node *root = input_tree();

    leaf_nodes(root, leafNodes);
    sort(leafNodes.begin(), leafNodes.end(),greater<int>());
    for (int leaf : leafNodes)
    {
        cout << leaf << " ";
    }

    return 0;
}
