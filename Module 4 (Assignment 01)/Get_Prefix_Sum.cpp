#include <bits/stdc++.h>
using namespace std;

bool des(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long long int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> prefix(n);
    prefix[0] = arr[0];

    long long int sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum = arr[i] + prefix[i - 1];
        prefix[i] = sum;
    }

    sort(prefix.begin(),prefix.end(),greater<long long int>());

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}