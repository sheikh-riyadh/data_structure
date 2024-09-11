#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {10, 20, 4, 5, 0, 54, 58, 96, 100};

    // আমরা যদি আমাদের লিস্টকে ছোট থেকে বড় আকারে সাজাতে চাই তাহলে আমদের সুদু sort() এই function টি কল করলে হবে
    my_list.sort();

    // আমরা যদি আমাদের লিস্টকে বড় থেক ছোট আকারে সাজাতে চাই তাহলে আমদের সুদু sort(greater<int>()) এই function টি কল করলে হবে
    my_list.sort(greater<int>());

    list<int> my_list_2 = {10, 20, 30, 10, 30, 50, 40, 10, 20};
    my_list_2.remove(10); // এই function লিস্টের যত জাগাই ২০ থাকবে সব গুলো remove করে দিবে ।

    my_list.reverse(); // এই function এর মাধ্যমে আমরা লিস্টকে উল্টা করে দেয় ।

    my_list_2.unique(); // এই function এর মাধ্যমে আমরা duplicate value গুলো remove করে দেই এবং unique value গুলো রেখে দেই এর জন্য আমাদের লিস্ট অবশ্যয় sort থাকবে হবে । 

    return 0;
}