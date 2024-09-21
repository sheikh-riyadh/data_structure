#include <bits/stdc++.h>
using namespace std;

vector<int> v1, v2;

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

void check_is_tree_are_same(Node *root1, Node *root2, bool &flag)
{
    queue<Node *> q1, q2;
    q1.push(root1);
    q2.push(root2);

    while (!q1.empty())
    {
        Node *parent1 = q1.front();
        Node *parent2 = q2.front();
        q1.pop();
        q2.pop();

        if (parent1->value && parent2->value)
        {
            if (parent1->left->value == parent2->left->value && parent1->right->value == parent2->right->value)
            {
                flag = true;
            }
        }

        if (parent1->left)
            q1.push(parent1->left);
        if (parent1->right)
            q1.push(parent1->right);
        if (parent2->left)
            q2.push(parent2->left);
        if (parent2->right)
            q2.push(parent2->right);
    }
}

int main()
{
    int lvl = 0;
    Node *root = input_tree();

    return 0;
}