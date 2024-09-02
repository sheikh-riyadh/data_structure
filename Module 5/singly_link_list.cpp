#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next; // এই নেক্সট হোল একটা পয়েন্টটার যেটা মূলত অ্যাড্রেস রাখে । 
};

int main()
{
    Node a, b;

    a.value = 10;
    b.value = 30;

    a.next = &b; // এখানে আমরা a object এর নেক্সট এর মধ্যে আমরা b এর অ্যাড্রেস কে রেখে দিলাম 
    b.next = NULL; // এখানে আমরা b object এর নেক্সট এর মধ্যে আমরা NULL রেখে দিলাম কারন b কেউকে লিংক করে না ।

    cout<<a.next->value; // এইখানে আমরা a এর নেক্সট value কে অ্যাক্সেস করলাম a এর নেক্সট value হোল b তাই আউট পুট আসবে ৩০
    return 0; 
}