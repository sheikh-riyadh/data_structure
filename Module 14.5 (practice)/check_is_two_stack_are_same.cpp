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
    int list_size = 0;
    void push(int val)
    {
        list_size += 1;
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
        list_size -= 1;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return list_size;
    }
    bool empty()
    {
        return list_size ? false : true;
    }
};
int main()
{
    my_stack st1, st2;
    bool flag = true;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int v;
        cin >> v;
        st1.push(v);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int v;
        cin >> v;
        st2.push(v);
    }

    if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
            }
            st1.pop();
            st2.pop();
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