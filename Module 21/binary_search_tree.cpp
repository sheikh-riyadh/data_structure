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
    queue<Node *> q;
    Node *root = NULL;
    int based;
    cin >> based;
    if (based != -1)
        root = new Node(based);
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

bool search_x(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->value == x)
        return true;

    else if (root->value > x)
    {
        bool l = search_x(root->left, x);
        if (l)
            return true;
        else
            return false;
    }
    else
    {
        bool r = search_x(root->right, x);
        if (r)
            return true;
        else
            return false;
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    bool flag = search_x(root, x);
    if (flag)
        cout << "YES EXIST" << endl;
    else
        cout << "NO EXIST" << endl;

    return 0;
}