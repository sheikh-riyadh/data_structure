#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next, *prev;

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
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
bool check_is_palindrome(Node *head, Node *tail)
{
    Node *i = head, *j = tail;
    bool flag = 1;

    while (i != j && i->next != j)
    {
        if (i->value != j->value)
        {
            flag = false;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
    {
        flag = false;
    }
    return flag;
}
int main()
{
    Node *head = NULL, *tail = NULL;
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
            insert_tail(head, tail, val);
        }
    }

    bool result = check_is_palindrome(head, tail);
    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}