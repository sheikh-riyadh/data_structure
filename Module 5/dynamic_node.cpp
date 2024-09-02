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
    Node *head = new Node(10); // এখানে আমরা new keyword use করছি যেটা মূলত আমাদের Node এর pointer দেয় আর এই pointer রাখার জন্য head নামের variable তৈরি করলাম
    Node *a = new Node(30);    // Same

    head->next = a; // এখানে আমরা a variable এর address head এর মধ্যে রেখে দিলাম যেহেতু a একটি pointer তাই আমাদের (&) এই sign ব্যাবহার করতে হবে না কারন a নিজে একটা pointer / address hold করে

    cout << head->value << endl;
    cout << head->next->value << endl;

    return 0;
}