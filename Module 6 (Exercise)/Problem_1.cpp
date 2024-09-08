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

void print_node(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void count_size(Node *head)
{

    int count = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp= temp->next;
        count++;

    }

    cout <<"Size:" << count<<endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value < 0)
        {
            break;
        }
        else
        {
            take_input_user(head, value);
        }
    }

    print_node(head);
    count_size(head);

    return 0;
}