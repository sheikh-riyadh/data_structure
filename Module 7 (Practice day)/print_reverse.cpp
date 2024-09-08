#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void my_recursive(Node *n)
{
    Node *temp = n;
    if (temp == NULL)
    {
        return;
    }
    my_recursive(n->next);
    cout << n->val << " ";
}

void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL, *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val < 0)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    my_recursive(head);

    return 0;
}