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

int size(Node *head)
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void isSame(Node *head_1, Node *head_2, int size_1, int size_2)
{

    int flag = 1;
    if (size_1 != size_2)
    {
        cout << "NO" << endl;
        return;
    }
    Node *temp_1 = head_1, *temp_2 = head_2;
    while (temp_1 != NULL && temp_2 != NULL)
    {
        if (temp_1->value != temp_2->value)
        {
            flag = 0;
        }
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }else{
         cout << "NO" << endl;
    }
}

int main()
{
    int size_1, size_2;
    Node *head_1 = NULL, *tail_1 = NULL, *head_2 = NULL, *tail_2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_tail(head_1, tail_1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_tail(head_2, tail_2, val);
    }

    size_1 = size(head_1), size_2 = size(head_2);
    isSame(head_1, head_2, size_1, size_2);

    return 0;
}