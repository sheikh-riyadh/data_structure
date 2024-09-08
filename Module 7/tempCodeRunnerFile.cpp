#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void my_recursition(Node *n)
{

    if (n == NULL)
        return;
    my_recursition(n->next);
    cout << n->value << " ";
}

int main()
{
    cout << endl;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    my_recursition(head);
    return 0;
}