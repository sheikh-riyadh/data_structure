#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* 
    আমাদের space complexity মধ্যে ২টি বিষয় আছে ১।। input space. ২।। auxiliary space 
    আমাদের space complexity মান 10^6 time complexity থেকে ১ কম 10^7 হল time complexity
    যদি O(n) তম space complexity নিয়ে কাজ করি তাহলে অবশ্যয় N এর মান 10^6 এর মধ্যে হতে হবে

    input space
    ===========
    int n;
    cin>>n;
    int arr[n];


    input space বলতে ধরা যাক int arr[4] নিয়েছি তাহলে এখানে আমরা বলতে পারি arr নামের 4টি variable তৈরি হয়েছে 
    arr[0],arr[1],arr[2],arr[3] তার মানে আমাদের মেমোরিতে arr জন্য ৪টি জাইগা তৈরি হয়ে বা space তৈরি হয়েছে এটা
    মূলত input space তার মানে আমার space complexity হল O(4) যদি আমাদের arr[n] হতো তাহলে space complexity
    O(n);




    auxiliary space
    ===============
    int a,b;
    cin>>a>>b;
    int sum = a+b;

    auxiliary space হল আমাদের input এর ফলাফল রাখার জন্য যেই variable রাখা হয় সেটা auxiliary space 
    এখানে sum হল auxiliary space কারন আমাদের a and b ইনপুট এর ফলাফল রাখার জন্য sum variable ব্যাবহার
    করা হয়েছে 



    int n;
    cin>>n;
    int arr[n];

    int arr_2[n];

    for(int i=0;i<n; i++)
    {
    arr_2[i]=arr[i]*2;
    }


    এখানে arr[n] হচ্ছে input space এবং arr_2[n] হচ্ছে auxiliary space কারন আমাদের arr[n] এর value গুলো
    ২গুন করে ফলাফল গুলো arr_2[n] এর মধ্যে রাখা হচ্ছে তার মানে আমার auxiliary space হচ্ছে O(n);




    int arr[n*n];
    ============
    space complexity হচ্ছে O(n*n)

    int arr[n][m]
    =============
    space complexity হচ্ছে O(n*m);

    



    
    
    
    
    
    
    
     */
    int a;
    int b;
    cin >> a >> b;
    int sum = 0;
    int sum = a + b;
    cout << sum;

    return 0;
}