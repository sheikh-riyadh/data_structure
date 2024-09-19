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
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_left = NULL, *my_right = NULL;
        if (l != -1)
            my_left = new Node(l);
        if (r != -1)
            my_right = new Node(r);

        p->left = my_left;
        p->right = my_right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int pre_order_sum_left_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int sum = 0;

    if (root->left != NULL)
    {
        sum += root->left->value;
    }
    sum += pre_order_sum_left_nodes(root->left);
    sum += pre_order_sum_left_nodes(root->right);

    return sum;
}

int main()
{

    Node *root = input_tree();
    cout << pre_order_sum_left_nodes(root);
    return 0;
}