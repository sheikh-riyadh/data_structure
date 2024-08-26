#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    ১. Big O notation:
    ==================

    আমরা যখন কোন প্রোগ্রাম রান করি তখন তার time complexity কত সেটা আমাদের প্রোগ্রামের step এর নিরবর করে যেমনঃ

    int a; ----- step 1
    int b; ----- step 2
    int sum; ---- step 3
    int sum= a + b; --- step 4
    cout<<sum; ---- step 5;


    আমরা উপরক্ত প্রগ্রামের titme complexity প্রকাশ করতে পারি big O notation এর মাধ্যমে যেহেতু আমাদের উপরক্ত প্রোগ্রামের
    total step হল ৫ টি তাহলে আমরা বলতে পারি উপরক্ত প্রোগ্রামের titme complexity হল big O(5);




    ২. titme complexity grammer:
    ===========================
    আমাদের step এর মধ্যে ২টি grammer আছে 
        ১. Always calculate for worst case ( এর মানে হল আমাদের সব সময় খারাপ দিক বিবেচনা করে calculate করে হবে )
        2. Ignore the constants (এর মানে হল আমাদের সব সময় গটা গটা value উপেক্ষা করতে হবে )








    time complexity grammer ১:
    ==========================
    ১.Always calculate for worst case 

    ধরা যাক আমাদের একটি 3 size array আছে যার মধ্যে কিছু value আছে এখন আমাদের একটি লুপ চালিয়ে দেখতে হবে array মধ্যে ১০ value আছে কিনা
    এখন কথা হল আমাদের ১০ value টি array প্রথম index এ থাকতে পারে আবার 2nd index থাকতে পারে অথবা last index থাকতে পারে এখন কি 
    আমরা আমরা কি বলতে পারবো আমাদের ১০ value টি ১ম index থাকবে এর জন্য আমাদের লুপটি ১বার চালাব অবশ্যয় না কারন আমরা জানি না আমাদের ১০
    value টি কোথাই আছে এমনকি আমাদের array মধ্যে ১০ value টি নাও থাকতে পারে তার মানে আমাদের array last পর্যন্ত আমাকে লুপ চালাতে হবে
    value যদি ১ম index থাকে তারপরও তার মানে আমাদের time complexity হল O(3) যেহেতু array size ৩ যদি আমাদের array size n হল তাহলে আমাদের 
    time complexity হতো O(n);




    time complexity grammer ২:
    ==========================
    ২.Ignore the constants

    constants বলতে যেই মান গুলো পরিবর্তন হবে না যেমনঃ

    for(int i=0; i<n/2; i++)

    আমরা যদি আমাদের উপরোক্ত loop টাকে time complexity কত সেটা বের করি তাহলে কি এমন হবে O(n/2)? 
    উত্তর না আমাদের constants value কে ignore করে হবে যেহেতু ২ হচ্ছে ফিক্সড এবং n এর মান জেকন কিছু হবে পারে
    ধরা যাক আমাদের n এর মান ১০০ তাহলে আমদের (n/2) = 100/2 এখন আমাদের result আসে ৫০ তার মানে আমাদের লুপ ১০০ বার চললে যেই
    সময় নিবে ৫০ বার চললে একয় সময় নিবে তাহলে আমাদের time complexity হচ্ছে O(n) আমরা constants value গুলো ignore করে দিচ্ছি 
    
     */

    return 0;
}