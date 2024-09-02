#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> q;

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
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}