#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    p = NULL;
};

int main()
{
    int val = 10;   // আমাদের val তে ১০ আছে এবং কল্পনা করি val variable এর মেমোরি address 2C
    int *pr = &val; /*এখানে আমরা val address (2C) টি pr নামের variable রেখে দিলাম যেহেতু integer variable এর address রাখছি তাই integer pointer তৈরি করলাম তাহলে এখন আমাদের pr এর মধ্যে val এর address (2C) আছে যেহেতু pr ও একটি
    variable টার ও একটি মেমোরি address আছে কল্পনা করি pr variable এর address হচ্ছে (2D)




    এখন fun(pr) function এর মধ্যে আমরা pr পাঠিয়ে দিলাম এখানে pr বলতে এখানে (2C) যেটা মূলত val address

    যেহেতু আমরা fun function এ parameter হিসাবে interger এর একটি address পাঠাচ্ছি যেটা মূলত val এর address (2C);
    তাহলে আমাদের আমাদের fun function এর মধ্যে integer এর একটি address receive করতে হবে আর address receive করার জন্য
    আমাদের pointer তৈরি করতে হয় যার জন্য void (int *p) 
    এখন আমরা যদি pr এর address receive করতে চাই তাহলে আমাদের *&p দিতে হবে এখন p এর মধ্যে pr এর address আছে
    which is (2D) 



    এখন যেহেতু p=NULL টার মানে আমাদের pr=NULL আছে মানে pr এর মধ্যে কোন কিছু নেই মানে pr এখন কাওকে point করছে না 
      */
    fun(pr);
    return 0;
}