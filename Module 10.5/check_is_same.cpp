#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void isSame(Node *head_1, Node *head_2)
{
    bool flag = true;
    Node *temp_1 = head_1, *temp_2 = head_2;
    while (temp_1 != NULL)
    {
        if (temp_1->value != temp_2->value)
        {
            flag = false;
            break;
        }

        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    cout << endl;
    Node *head_1 = NULL, *tail_1 = NULL;
    Node *head_2 = NULL, *tail_2 = NULL;

    for (int i = 0; i <= 1; i++)
    {
        if (i == 0)
        {
            while (true)
            {
                int val;
                cin >> val;
                if (val == -1)
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
                if (val == -1)
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
        isSame(head_1, head_2);
    }
    else
    {
        cout << "NO";
    }

    return 0;
}