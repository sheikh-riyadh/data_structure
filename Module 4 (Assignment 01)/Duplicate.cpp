#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    
    int initial_find_value = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != initial_find_value)
        {
            initial_find_value = arr[i];
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}