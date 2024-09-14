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

void swaping_node(Node *head, int nth, int size)
{
    Node *temp_1 = head, *temp_2 = head;
    int swap_value_1, swap_value_2;
    for (int i = 0; i < nth - 1; i++)
    {
        temp_1 = temp_1->next;
    }
    swap_value_1 = temp_1->value;
    for (int i = 0; i <= size - nth - 1; i++)
    {
        temp_2 = temp_2->next;
    }
    swap_value_2 = temp_2->value;
    Node *temp = head;
    for (int i = 1; i <= size; i++)
    {
        if (temp == temp_1)
        {
            temp->value = swap_value_2;
        }
        if (temp ==temp_2)
        {
            temp->value = swap_value_1;
        }
        temp = temp->next;
    }
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
    Node *head = NULL, *tail = NULL;
    int nth;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            cin >> nth;
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    swaping_node(head, nth, size(head));
    print(head);
    return 0;
}