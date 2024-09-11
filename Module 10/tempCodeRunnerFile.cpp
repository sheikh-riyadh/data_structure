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
int main()
{
    cout << endl;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b;

    /* আমরা চেক করবো আমাদের লিস্ট কি সাইকেল আছে কিনা আর এটা চেক করার জন্য আমরা একটা technic ব্যাবহার করবো
    যার নামে hare and tortoise বা fast and slow;

    আমরা fast কে ২ ঘর করে আগাবো এবং slow কে ১ ঘর করে আগাবো যেমনঃ

     */

    Node *fast = head;
    Node *slow = head;

    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout << "No detected";
    }

    return 0;
}