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
class myQueue
{
public:
    Node *head = NULL, *tail = NULL;
    int queue_size = 0;
    void push(int val)
    {
        queue_size++;
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
    void pop()
    {
        queue_size--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
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
        return queue_size == 0 ? true : false;
    }
};

int main()
{

    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}