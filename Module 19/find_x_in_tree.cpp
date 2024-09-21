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

        Node *my_left = NULL, *my_right = NULL;
        int l, r;
        cin >> l >> r;
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
};

void find_x(Node *root, int x, int &flag)
{
    if (root == NULL)
    {
        return;
    }
    if (root->value == x)
    {
        flag = 1;
        return;
    }
    find_x(root->left, x, flag);
    find_x(root->right, x, flag);
};

int main()
{

    int flag = 0;

    Node *root = input_tree();
    int x;
    cin >> x;

    find_x(root, x, flag);
    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}