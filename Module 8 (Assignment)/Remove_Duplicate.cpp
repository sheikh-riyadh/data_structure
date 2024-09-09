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

void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void remove_duplicate(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *prev = i;
        Node *j = i->next;
        
        while (j != NULL)
        {
            if (i->value == j->value)
            {
                Node *deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
    }
}

int main()
{
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

    remove_duplicate(head);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    return 0;
}