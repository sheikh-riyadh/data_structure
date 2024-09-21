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

void sum_without_leaf(Node *root, int &sum)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        if (parent->left != NULL || parent->right != NULL)
        {
            sum+=parent->value;
        }

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

int main()
{

    int sum = 0;
    Node *root = input_tree();
    sum_without_leaf(root, sum);
    cout << sum << endl;
    return 0;
}