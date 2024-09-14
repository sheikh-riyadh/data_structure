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

void remove_nth_node(Node *&head, int val, int size)
{
    if (size == val)
    {

        head = head->next;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < size - val - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
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
int main()
{

    cout << endl;
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

    remove_nth_node(head, search, size(head));
    print(head);
    return 0;
}