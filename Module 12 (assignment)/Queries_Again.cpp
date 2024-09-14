#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next, *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

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

void insert_at_any_position(Node *head, int position, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void insert_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *head)
{
    Node *temp = head;
    int list_size = 0;
    while (temp != NULL)
    {
        list_size++;
        temp = temp->next;
    }

    return list_size;
}

void print_normal(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
     cout << endl;
}

int main()
{
    Node *head = NULL, *tail = NULL;
    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (x == size(head))
        {
            insert_tail(tail, v);
        }
        else
        {
            insert_at_any_position(head, x, v);
        }
        if (x < size(head))
        {
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}