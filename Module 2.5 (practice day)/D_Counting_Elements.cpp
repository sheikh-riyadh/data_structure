#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        vector<int>::iterator it;
        it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            count++;
        }
    }

    cout << count;

    return 0;
}