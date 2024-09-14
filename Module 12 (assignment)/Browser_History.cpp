#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val)
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

void history(Node *head, int indx)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL && count < indx)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
        cout << temp->value << endl;
    else
        cout << "Not Available" << endl;
}

int find_index(Node *head, string v, int size)
{
    Node *temp = head;
    for (int i = 0; i < size; i++)
    {
        if (temp->value == v)
        {
            return i;
        }
        temp = temp->next;
    }
    return -1;
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

int main()
{
    Node *head = NULL, *tail = NULL;
    int query;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            cin >> query;
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    int indx = 0;
    for (int i = 0; i < query; i++)
    {
        string x;
        cin >> x;
        if (x == "visit")
        {
            string v;
            cin >> v;
            int index_found = find_index(head, v, size(head));
            if (index_found != -1)
            {
                indx = index_found;
                history(head, indx);
            }
            else
                cout << "Not Available" << endl;
        }
        else if (x == "prev")
        {
            indx -= 1;
            if (indx < 0)
            {
                cout << "Not Available" << endl;
                indx = 0;
            }
            else
                history(head, indx);
        }
        else if (x == "next")
        {
            indx += 1;
            if (indx >= size(head))
            {
                cout << "Not Available" << endl;
                indx = size(head) - 1;
            }
            else
                history(head, indx);
        }
    }
    return 0;
}
