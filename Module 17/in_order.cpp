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

void in_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->value << " ";
    in_order(root->right);
};

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;
    c->left = h;
    d->left = i;
    e->left = f;
    e->right = g;

    in_order(root);
    return 0;
}