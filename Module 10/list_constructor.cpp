#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*

    উদাহারন ১ঃ
    ==========

    আমরা যদি লিস্ট তৈরি করতে চাই তাহলে আমাদের আগে list word লিখতে হবে তার পর angle bracket এর মধ্যে আমাদের
    data type দিতে হবে এবং পরে আমাদের list এর একটি নাম দিতে হবে list <int> my_list যেমনঃ ।

    list<int> my_list_1;
    my_list_1 = {10, 20, 30, 40, 50, 60, 70};


    উদাহারন ২ঃ
    ==========
    আমরা আমাদের লিস্ট এর সাইজ দেখতে পারবো size() function এর মাধ্যমে যেমনঃ

    cout << my_list_1.size()<<endl;




    উদাহারন ৩ঃ
    ==========
    আমরা যদি আমাদের প্রতিটা লিস্ট দেখতে চাই তাহলে আমাদের লুপ করে দেখতে হবে কিন্তু আমরা যেই লুপ চালিয়ে array
    value দেখি পারি সেভাবে আমরা লিস্ট এর উপর লুপ চালাতে পারবো না আমাদের iterator এর মাধ্যমে করতে হবে


    list<int>::iterator it;

    for (it = my_list_1.begin(); it != my_list_1.end(); it++)
    {
        cout << *it << endl;
    }



    উদাহারন ৪ঃ
    ==========
    আমরা যদি চাই একটি লিস্ট এর value অন্য লিস্টে কপি করতে তাহলে সেটা করতে পারবো যেমনঃ
    list<int> my_list_2(my_list);

    এখন আমাদের my_list_2 এর মধ্যে আমাদের my_list_1  এর value গুলো কপি
    হয়ে গেছে ।





    উদাহারন ৫ঃ
    ==========
    আমরা চাইলে কোন একটি array থেকে list এর বিতরে copy করতে পারি যেমনঃ 
    int arr[5]={10,20,30,40,50};
    list<int> my_list_3(arr, arr+5);





    উদাহারন ৬ঃ
    ==========
    আমরা চাইলে কোন একটি vector থেকে list এর বিতরে copy করতে পারি যেমনঃ 
    vector<int> v_1 = {10, 20, 30, 40, 50};
    list<int> my_list_4(v_1.begin(), v_1.end());




    
     */

    cout << endl;

    /* উদাহারন ১ঃ */
    list<int> my_list_1;
    my_list_1 = {10, 20, 30, 40, 50, 60, 70};

    /* উদাহারন ২ঃ */
    cout << my_list_1.size() << endl;

    /* উদাহারন ৩ঃ */
    list<int>::iterator it;

    for (it = my_list_1.begin(); it != my_list_1.end(); it++)
    {
        cout << *it << endl;
    }

    /* উদাহারন ৪ঃ */
    list<int> my_list_2(my_list_1);

    /* উদাহারন ৫ঃ */
    int arr[5] = {10, 20, 30, 40, 50};
    list<int> my_list_3(arr, arr + 5);

    /* উদাহারন ৬ঃ */
    vector<int> v_1 = {10, 20, 30, 40, 50};
    list<int> my_list_4(v_1.begin(), v_1.end());

    return 0;
}