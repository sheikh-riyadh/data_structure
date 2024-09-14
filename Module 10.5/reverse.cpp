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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverse(Node *head, Node *tail)
{

    Node *i = head, *j = tail;
    while (i != j && i->next != j)
    {
        int temp = i->value;
        i->value = j->value;
        j->value = temp;

        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    cout << endl;
    Node *head = NULL, *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_tail(head, tail, val);
    }

    reverse(head, tail);
    print(head);

    return 0;
}