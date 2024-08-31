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
    for (int i = 0; i < q; i++)
    {
        int x, flag = 0;
        cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = 1;
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