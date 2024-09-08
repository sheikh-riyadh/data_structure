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
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int main()
{
    Node *head_1 = NULL, *tail_1 = NULL, *head_2 = NULL, *tail_2 = NULL;

    for (int i = 0; i <= 1; i++)
    {
        if (i == 0)
        {
            while (true)
            {
                int val;
                cin >> val;
                if (val < 0)
                {
                    break;
                }
                else
                {
                    insert_tail(head_1, tail_1, val);
                }
            }
        }
        else
        {
            while (true)
            {
                int val;
                cin >> val;
                if (val < 0)
                {
                    break;
                }
                else
                {
                    insert_tail(head_2, tail_2, val);
                }
            }
        }
    }

    if (size(head_1) == size(head_2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}