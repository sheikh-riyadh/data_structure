#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++)
    {
        int n, flag = 1;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i-1]) 
            {
                flag = 0;
                break; 
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
