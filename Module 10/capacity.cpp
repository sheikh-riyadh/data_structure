#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list_1 = {10, 20, 30};

    cout << list_1.size(); // এই function এর মাধ্যমে আমরা list এর সাইজ দেখতে পারি ।
    list_1.clear();        // এই function এর মাধ্যমে আমরা list এর সবগুলো value কে ক্লিয়ার করতে পারি ।

    list_1.empty(); // এই function এর মাধ্যমে আমরা list খালি আছে কিনা সেটা চেক করতে পারি যদি খালি থাকে তাহলে true otherwise false;

    list_1.resize(2);  // আমাদের লিস্টের টোটাল সাইজ হোল ৩ কিন্তু এখন ২ কারন আমারা resize(2) দিয়েছি ।
    list_1.resize(10); // এখন আমাদের লিস্টের সাইজ হোল ১০ {১০,২০,০,০,০,০,০,০,০,০}
    
    return 0;
}