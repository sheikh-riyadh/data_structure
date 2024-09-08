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

void insert_head(Node *&head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void print_node(Node *head)
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

    Node *head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1 insert node:"<<endl;
        cout << "Option 2 insert head:"<<endl;
        cout << "Option 3 print :"<<endl;
        cin >> op;
        if (op == 1)
        {
            while (true)
            {
                int val;
                if (val < 0)
                {
                    break;
                }
                else
                {
                    cin >> val;
                    take_input_user(head, val);
                }
            }
        }
        else if (op == 2)
        {
            int val;
            cout << "Please enter value:";
            cin >> val;
            insert_head(head, val);
        }
        else if (op == 3)
        {
            print_node(head);
        }
        else
        {
            break;
        }
    }

    return 0;
}