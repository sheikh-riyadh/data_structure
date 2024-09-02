#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, insert_position;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cin >> insert_position;

    a.insert(a.begin() + insert_position, b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}