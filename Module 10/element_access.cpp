#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {10, 20, 30, 40, 50};

    /* আমরা যদি আমাদের লিস্টের প্রথম value দেখতে চাই তাহলে আমাদের my_list.front() এই function use করতে হবে */
    my_list.front();

    /* আমরা যদি আমাদের লিস্টের last value দেখতে চাই তাহলে আমাদের my_list.back() এই function use করতে হবে */
    my_list.back();

    /* আমরা যদি কোন নিদিষ্ট value দেখতে চাই তাহলে আমদের next(my_list.begin(),2)  এর মানে হোল আমারা আমাদের লিস্টের ২ নাম্বার ইনডেক্স এর value দেখতে চাই */
    list<int>::iterator it;
    it = next(my_list.begin(), 1);
    cout << *it;

    return 0;
}