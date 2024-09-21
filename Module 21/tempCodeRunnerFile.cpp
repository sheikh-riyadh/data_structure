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

Node *convert(int arr[], int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *my_left = convert(arr, l, mid - 1);
    Node *my_right = convert(arr, mid + 1, r);
    root->left = my_left;
    root->right = my_right;

    return root;
}

void print_tree(Node *root)
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

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert(arr, 0, n - 1);
    print_tree(root);

    return 0;
}