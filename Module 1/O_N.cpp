#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* 
    আমরা এই প্রোগ্রামের time complexity বের করবো আমাদের টোটাল step 1 আছে ৭টি এর জন্য আমাদের time complexity কি O(7) হবে?
    উত্তর না আমাদের যেগুলো step 1 আছে সব গুলোর জন্য আমাদের time complexity O(1) এগুলোকে বলা হয় constants complexity
    মানে আমাদের step 1 total হল 7 টি এর জন্য আমাদের প্রোগ্রাম time complexity O(7) হবে না আমাদের step 1 করতে যেই সময় 
    লাগবে বাকি step 1 গুলো করতে একই সময় লাগবে মানে O(1) মানে O(1) time complexity তেমন কোন সময় লাগবে না



    আমাদের constants complexity তে সময় না লাগলেও loop এর মধ্যে সময় লাগে আমাদের time complexity হিসাব হয় মূলত loop এর
    উপর.

    ১. আমাদের ১ম loop টি আমরা n তম বার চালিয়ে array index গুলোতে মান সেট করছি তার মানে প্রথম লুপ টির time complexity হচ্ছে
    O(n);


    ২. আমাদের ২য় loop টিতে আমরা যোগ করছি n তম বার তার মানে আমদের ২য় লুপ এর time complexity হচ্ছে O(n)
    তাহলে কি আমাদের total time complexity কি O(n+n)? উত্তর না কারন আমরা একটা বিষয় লক্ষ করলে দেখতে পারবো
    আমাদের array তে index মান সেট করার জন্য কিন্তু n তম বার চলছে এবং যোগ করার সময় n তম বার চলছে তার মানে আমাদের
    time complexity O(n+n) না হয়ে O(n) হবে কারন প্রথম লুপ এবং দ্বিতীয় লুপ সমান সময় লাগবে ২টি লুপ এর জন্য আলাদা আলাদা টাইম
    লাগবে না।


    তাহলে আমরা বলতে পারি এই প্রোগ্রামের জন্য time complexity হচ্ছে O(n);

    যদি এমন হতো আমাদের ২টি লুপ এর n এর মান সমান না।


    ধরিঃ
    int n1=100,n2=200;

    1st loop. for(int i=0; i<n1; i++);
    2nd loop. for(int i=0; i<n2; i++);

    এই সময় আমাদের time complexity কত হবে এখানে যেহেতু ২টি লুপ চলছে এইখানে time complexity টা হিসাব হবে
    কোন লুপটির n এর মান বেশি ২টি চলার জন্য আলাদা আলাদা সময় count হয় না এখানে যেই লুপ এর n এর মান 
    বেশি সেটা হবে এই প্রোগ্রামের time complexity যেহেতু আমাদের ২য় লুপটির n2 এর মান বেশি তাহলে আমাদের time complexity 
    হবে O(n2) নামে O(200);


    ধরি, আমাদের ২ টি লুপ চলবে প্রথম লুপ হল for(int i=0; i<m; i++) এবং আমাদের ২য় লুপটি হচ্ছে for(int i=0;i<n;i++);
    এই ক্ষেত্রে আমাদের time complexity কত হবে এখানে একটা বিষয় আমারা লক্ষ করলে দেখতে পারবো আমাদের ২ টি লুপ এর m এবং n এর মান
    আমরা জানি না সেই ক্ষেত্রে আমরা বলতে পারি আমাদের time complexity হল O(m+n) কারন আমরা জানি না m এবং n এর মান কত হবে ।
    


    O(N) time complexity কে linear complexity বলা হয় 
    
     */


    int n; // step 1
    cin >> n; // step 1
    int arr[n]; //step 1

    for (int i = 0; i < n; i++) // step n
    {
        cin >> arr[i]; // step 1
    }

    int sum = 0; // step 1

    for (int i = 0; i < n; i++) // step n
    {
        sum += arr[i]; // step 1
    }

    cout << sum; // step 1

    return 0;
}