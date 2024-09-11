#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {10, 20, 30, 40, 50};

    /* ADDING */
    my_list.push_back(60); // এর মাধ্যমে আমরা আমাদের লিস্টে সবার শেষে value যুক্ত করতে পারি -> {10,20,30,40,50,60}
    my_list.push_front(5); // এর মাধ্যমে আমরা আমাদের লিস্টে সবার প্রথম value যুক্ত করতে পারি -> {5 10,20,30,40,50}

    /* REMOVE */
    my_list.pop_back();  // এর মাধ্যমে আমরা আমাদের লিস্টে সবার শেষে  value মুছে ফেলতে পারি -> {10,20,30,40}
    my_list.pop_front(); // এর মাধ্যমে আমরা আমাদের লিস্টে সবার প্রথম value মুছে ফেলতে পারি -> {20,30,40,50}

    /* INSERT NEW VALUE WITH SPECIFIC POSITION */
    my_list.insert(next(my_list.begin(), 2), 100); // এই function এর মাধ্যমে আমরা একটি নিদিষ্ট position এ value যুক্ত করতে পারি যেমন আমরা ২ নাম্বার position এ ১০০ insert করেছি {10,20,100,30,40,50};

    my_list.insert(next(my_list.begin(), 1), {100, 200, 300}); // আমরা আমাদের লিস্টে 1 number index একাদিক value যুক্ত করলাম {100,200,300} -> {10,100,200,300,30,40,50}

    /* REMOVE VALUE WITH SPECIFIC POSITION */
    my_list.erase(next(my_list.begin(), 2)); // আমরা লিস্ট থেকে 2 number index এর value ডিলিট করা হয়েছে {10,20,40,50}
    my_list.erase(next(my_list.begin(), 2), next(my_list.begin(), 4)); // আমরা লিস্ট থেকে 2 number index থেকে 4 number index এর value ডিলিট করা হয়েছে {10,20,50}



    /* REPLACE VALUE FROM LIST */
    replace(my_list.begin(), my_list.end(),30,100); // এই function এর মাধ্যমে আমারা কোন লিস্টের শুরু থেকে শেষ পর্যন্ত যত গুলো ৩০ পাবে সেগুলকে ১০০ দিয়ে replace করে দিবে ।

    return 0;
}