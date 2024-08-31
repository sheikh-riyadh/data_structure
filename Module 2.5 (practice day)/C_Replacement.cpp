#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            continue;
        else if (v[i] > 0)
            replace(v.begin(), v.end(), v[i], 1);
        else
            replace(v.begin(), v.end(), v[i], 2);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (v.size() - 1 != i)
        {
            cout << " ";
        }
    }

    return 0;
}