#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    আমরা আজ O(sqrt(N)) এর complexity নিয়ে কথা বলবো O(sqrt(N)) মূলত divisor বের করার জন্য এবং আরও অনন্য কাজের
    জন্য এই complexity ব্যাবহার করে থাকে এই complexity O(N) থেকে ভালো O(log(N)) থেকে খারাপ আমাদের O(sqrt(N)) 10^14 পর্যন্ত
    value নিয়ে কাজ করতে পারে এখন আমরা যদি 10^14 কে O(N) complexity দিয়ে সমাধান করতে চাই তাহলে আমরা time limit exit এই
    error খেয়ে যাবো কারন আমাদের ১ সেকেন্ডে লুপ 10^7 পর্যন্ত চলতে পারে।

    তার মানে আমরা 10^14 এটা O(N) complexity দিয়ে সম্ভব না কিন্তু আমরা যদি 10^14 কে O(sqrt(N)) complexity দিয়ে সমাধার করতে চাই
    তাহলে সহজে করতে পারবো যেমন আমরা 10^14 কে যদি O(sqrt(N)) convert করি তাহলে আমাদের result আসে 10^7 আর আমরা জানি
    10^7 ১ সেকেন্ড চলতে পারে

    O(sqrt(10^14)) = 10^7
     */
    int n = 36;

    for (int i = 0; i < sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            cout << i<<" ";
        }
    }

    return 0;
}