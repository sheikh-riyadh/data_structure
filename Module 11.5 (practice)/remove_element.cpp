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

void remove(Node *&head, int v)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->value == v)
        {
            Node *deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
        }
        else
            temp = temp->next;
    }
    if (temp->value == v && temp->next == NULL)
    {
        head = NULL;
    }
    else
    {

        temp = head;
        if (temp->value == v && temp->next != NULL)
        {
            head = temp->next;
        }
    }
}

int main()
{
    Node *head = NULL, *tail = NULL;
    int search;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            cin >> search;
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    remove(head, search);
    print(head);

    return 0;
}