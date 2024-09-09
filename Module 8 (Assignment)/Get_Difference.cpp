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

int find_max(Node *head)
{
    int max = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value > max)
        {
            max = temp->value;
        }
        temp = temp->next;
    }

    return max;
}

int find_min(Node *head)
{
    int min = INT_MAX;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value < min)
        {
            min = temp->value;
        }
        temp = temp->next;
    }

    return min;
}

int main()
{
    Node *head = NULL, *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val ==-1)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    cout << find_max(head) - find_min(head);

    return 0;
}