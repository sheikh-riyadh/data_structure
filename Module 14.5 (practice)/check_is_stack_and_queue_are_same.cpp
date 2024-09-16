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

class my_queue
{
public:
    Node *head = NULL, *tail = NULL;
    int queue_size = 0;
    void push(int val)
    {
        queue_size += 1;
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
    void pop()
    {
        queue_size -= 1;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return queue_size;
    }
    bool empty()
    {
        return queue_size ? false : true;
    }
};

class my_stack
{
public:
    Node *head = NULL, *tail = NULL;
    int stack_size = 0;
    void push(int val)
    {
        stack_size += 1;
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
    void pop()
    {
        stack_size -= 1;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            delete deleteNode;
            return;
        }
        tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return stack_size;
    }
    bool empty()
    {
        return stack_size ? false : true;
    }
};

int main()
{

    my_queue q;
    my_stack s;
    int n1, n2;
    bool flag = true;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int v;
        cin >> v;
        s.push(v);
    }

    if (q.size() == s.size())
    {
        while (!q.empty())
        {
            if (q.front() != s.top())
            {
                flag = false;
            }
            q.pop();
            s.pop();
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}