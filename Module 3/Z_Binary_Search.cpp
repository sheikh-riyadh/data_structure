#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < q; i++)
    {
        int x, l = 0, r = n - 1, flag = 0;
        cin >> x;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (arr[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "found"<<endl;
        }
        else
        {
            cout << "not found"<<endl;
        }
    }
    

    return 0;
}

/*
1,2,3,4,5


step1 :
=======

l=0 r=n-1 || 5-1 n=4
0+4/2 =2 mid=2;

if(arr[mid]==x) || (3==5)

if(arr[mid]>x) || (3>5)

else l=mid+1 || 2+1=3;



step 2 :
========

l=3, r=4; mid=3+4/2; || mid=3

if(arr[mid]==x) || (4==5)

if(arr[mid]>x) || (4>5)

else l=mid+1 || 3+1=4



step 3:
=======

l=4, r=4; mid=4+4/2=4 || mid=4;

if(arr[mid]==x) || (5==5)


 */