#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);
    v.assign({10, 20, 30, 40, 50}); // আমরা এই function এর মাধ্যমে আমরা প্রথমে vector তৈরি করে পরে সেটা value assing করতে পারি ।
    v.push_back(40);                // এই function এর মাধ্যমে last index এ value add করতে পারি যেমন ১০,২০,৩০,৪০,৫০,৪০ ।
    v.pop_back();                   // এই function এর মাধ্যমে last index এ value remove করতে পারি যেমন ১০,২০,৩০,৪০ ।
    v.insert(v.begin() + 2, 89);    // এই function এর মাধ্যমে যেকোনো position value add করতে পারি ১০,২০,৮৯,৩০,৪০,৫০ ।
    v.erase(v.begin() + 1);         // এই function এর মাধ্যমে যেকোনো position value remove করতে পারি ১০,৩০,৪০,৫০ ।

    vector<int> v1 = {1, 2, 5, 2, 4, 7, 3, 2, 7, 4, 2};

    replace(v1.begin(), v1.end(), 2, 100); // এই function এর মাধ্যমে আমরা বলে দিলাম আমাদের replace টা শুরু পয়েন্ট এবং শেষ পয়েন্ট তার পর কি
                                          // replace করবে যেহেতু আমরা ২ replace করবো তাই ২ দিয়েছি এবং ২ এর জাগাই ১০০ থাকবে তাই ১০০ দিয়েছি .



    auto it = find(v1.begin(),v1.end(),2);
    cout<<*it;
   

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}