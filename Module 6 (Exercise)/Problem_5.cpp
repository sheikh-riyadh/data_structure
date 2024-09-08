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

void take_input_user(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_tail(Node *head)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next=NULL;
    delete deleteNode;
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
    Node *head = NULL;
    while (true)
    {
        cout << "Insert node Option 1:" << endl;
        cout << "Print node Option 2:" << endl;
        cout << "Delete tail 3:" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << "Please enter value: " << endl;
            cin >> val;
            take_input_user(head, val);
        }
        else if (op == 2)
        {
            print_node(head);
        }
        else if (op == 3)
        {
            delete_tail(head);
        }

        else
        {
            break;
        }
    }

    return 0;
}