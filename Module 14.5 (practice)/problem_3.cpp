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
    my_stack st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st1.push(v);
    }
    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}