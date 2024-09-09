#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
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

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void print_middle(Node *head, int size)
{
    Node *temp = head;
    for (int i = 0; i < size; i++)
    {
        if (size % 2 != 0)
        {
            if (size / 2 == i)
            {
                cout << temp->val << " ";
                break;
            }
        }
        else
        {
            if (size / 2 - 1 == i || size / 2 == i)
            {
                cout << temp->val << " ";
            }
        }
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val < 0)
            break;
        else
            insert_tail(head, tail, val);
    }

    int result = size(head);
    print_middle(head, result);
    return 0;
}