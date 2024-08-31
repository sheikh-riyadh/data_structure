#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pre[n];
    pre[0] = 0;

    for (int i = 1; i < n; i++)
    {
        sum += i;
        pre[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<pre[i]<<" ";
    }
    

    return 0;
}