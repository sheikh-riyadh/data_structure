#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> result(v2);
    result.insert(result.end(), v1.begin(), v1.end());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (result.size() - 1 != i)
        {
            cout << " ";
        }
    }

    return 0;
}