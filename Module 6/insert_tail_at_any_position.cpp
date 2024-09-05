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

void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
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
};

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl;
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: print link list" << endl;
        cout << "Option 3: insert any position" << endl;
        cout << "Option 4: terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {

            print_node(head);
        }
        else if (op == 3)
        {
            cout << "Please inter position:" << endl;
            int pos;
            cin >> pos;
            cout << "Please enter value: " << endl;
            int val;
            cin >> val;
            insert_at_any_position(head, pos, val);
        }
        else
        {
            break;
        }
    }

    return 0;
}