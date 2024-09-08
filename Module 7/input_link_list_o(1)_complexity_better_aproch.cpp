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
    }
    tail->next = newNode;
    tail = newNode;
}

void print_node(Node *head)
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

    int val;
    while (true)
    {
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

    print_node(head);

    return 0;
}