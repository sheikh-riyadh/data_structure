#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    int l = 0, r = n - 1, mid, count = 0;

    while (l <= r)
    {

        mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            if (count > 2)
            {
                break;
            }
            else
            {
                count++;
            }
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

    if (count > 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}