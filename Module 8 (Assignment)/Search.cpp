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

void isExist(Node *head, int x)
{
    Node *temp = head;
    int index = 0;
    bool is_exist = false;
    
    while (temp != NULL)
    {
        if (temp->value == x)
        {
            is_exist = true;
            break;
        }
        temp = temp->next;
        index++;
    }

    if (is_exist)
    {
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        Node *head = NULL, *tail = NULL;

        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                int x;
                cin >> x;
                isExist(head, x);
                break;
            }
            else
            {
                insert_tail(head, tail, val);
            }
        }
    }

    return 0;
}
