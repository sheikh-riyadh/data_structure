#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

//======= Insert at any position functionality here =======

void insert_at_any_position(Node *head, Node *&tail, int position, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

//======= Delete at any position functionality here =======

void delete_at_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = delete_node->next;
    temp->next->prev = temp;
    delete delete_node;
}

// ======= Insert head functionality here =======

void insert_head(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

//======= Delete head functionality here =======

void delete_head(Node *&head, Node *&tail)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

//======= Delete tail functinality here =======

void delete_tail(Node *&tail, Node *&head)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

// ======= Normal print functionality herer =======

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ======= Reverse print functionality here =======

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{

    cout << endl;

    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = e;
    e->prev = d;

    int val = 54;

    // delete_tail(tail,head);
    // delete_head(head,tail);

    // insert_head(head, tail, val);

    // insert_at_any_position(head, tail, 4, 25);
    delete_at_any_position(head, 3);

    print_normal(head);
    print_reverse(tail);

    return 0;
}