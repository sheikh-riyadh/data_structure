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

void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insert_at_any_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL && pos > 1)
    {
        cout << endl
             << "Please insert minimum 1 value" << endl;
        return;
    }
    if (head == NULL && pos == 1)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl;
            cout << "invalid postion" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void print_node(Node *head)
{

    cout << endl;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
};

void delete_node_at_any_position(Node *head, int pos)
{

    if (head == NULL)
    {
        cout << endl
             << "Invalid index" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid index" << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid index" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl;
        cout << "Value not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << endl;
        cout << "Option 1: insert at tail" << endl;        // error handle done
        cout << "Option 2: print link list" << endl;       // error handle done
        cout << "Option 3: insert any position" << endl;   // error handle done
        cout << "Option 4: insert head position" << endl;  // error handle done
        cout << "Option 5: inter delete position" << endl; // error handle done
        cout << "Option 6: delete head" << endl;           // error hanel done
        cout << "Option 7: terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {

            print_node(head);
        }
        else if (op == 3)
        {
            cout << "Please inter position:" << endl;
            int pos;
            cin >> pos;
            cout << "Please enter value: " << endl;
            int val;
            cin >> val;
            if (pos == 1)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Please enter position: ";
            cin >> pos;
            if (pos == 1)
            {
                delete_head(head);
            }
            else
            {
                delete_node_at_any_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else
        {
            break;
        }
    }

    return 0;
}