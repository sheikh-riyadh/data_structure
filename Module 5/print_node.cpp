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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40); 
    Node *d = new Node(50);

    /* Linking the variable */
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout << endl;
    cout << head->value << endl; // head value 10
    cout << head->next->value << endl; // a value  20
    cout << head->next->next->value << endl; // b value 30
    cout << head->next->next->next->value << endl; // c value 40
    cout<< head->next->next->next->next->value<<endl; // d value 50;
     /*           a     b     c     d      */    







    /* better way to print Node */   


    Node *temp =head;
 
    while (temp!=NULL)
    {
       cout<<temp->value<<endl;
       temp = temp->next;
    }



    /* আমরা head কে temp variable রেখে দিয়েছি কারন যখন head->next->next->...... করে যাবে কোন এক সময় আমাদের head NULL point করবে তখন আমরা যদি আবার loop চালাই তখন নতুন করে আর loop চালাতে পারবে না কারন একবার loop চলার পর আমাদের head NULL point করছে এখন আবার লুপ চালালে আর next জেতে পারবে না কারন একবার লুপ চলার পর আমাদের head NULL হবে */
    
    return 0;
}