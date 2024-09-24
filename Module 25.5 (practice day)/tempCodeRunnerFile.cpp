#include <bits/stdc++.h>
using namespace std;

long long int sum = 0;
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
long long int range_sum(Node *root, int low, int high)
{
    if (root == NULL)
        return 0;

    long long int l = range_sum(root, low, high);
    long long int r = range_sum(root, low, high);
    if (l == low)
    {
        return sum += l;
    }
    if (r == high)
    {
        return sum += r;
    }
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        cout << parent->value << " ";

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(5);
    Node *b = new Node(15);
    Node *c = new Node(3);
    Node *d = new Node(7);
    Node *e = new Node(18);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;

    // level_order(root);

    range_sum(root, 5, 18);
    cout << sum << "";

    return 0;
}