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

void find_lavel(Node *root, int x, int &lvl)
{

    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        Node *n = parent.first;
        int lavel = parent.second;
        q.pop();

        if (n->value == x)
        {
            lvl = lavel;
            return;
        }

        if (n->left)
            q.push({n->left, lavel + 1});
        if (n->right)
            q.push({n->right, lavel + 1});
    }
}

int main()
{
    int lvl = 0;
    Node *root = input_tree();
    int x;
    cin >> x;
    find_lavel(root, x, lvl);

    cout << lvl << endl;
    return 0;
}