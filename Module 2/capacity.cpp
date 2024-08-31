#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << v.size()<<endl; // আমরা vector এর সাইজ জানতে পারি আউটপুট ৫
    cout << v.max_size()<<endl; // আমাদের vector ম্যাক্সিমাম কত পর্যন্ত value store করতে পারবে সেটা জানতে পারি.
    cout << v.capacity()<<endl; // এটার মাধ্যমে আমরা বর্তমান capacity কত আছে সেটা জানতে পারি 
    v.clear();// এটার মাধ্যমে আমরা vector এর value গুলো মুছে ফেলা যাই তবে মেমোরি ডিলিট হয় না সুদু মারত তার value delete হয়.
    v.empty(); //  এটার মাধ্যমে আমরা vector এর value আছে কিনা সেটা চেক করা হয় যদি value থাকে তাহলে false আর না থাকে তাহলে true.
    v.resize(7); // এর মাধ্যমে আমরা আমাদের vector এর সাইজ বাড়াতে পারি আমাদের আগে সাইজ ছিল ৫ এখন ৭ বাকি ২ ঘরে ০ বসিয়ে দিবে


    return 0;
}