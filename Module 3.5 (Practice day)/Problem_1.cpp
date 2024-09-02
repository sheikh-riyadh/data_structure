#include <bits/stdc++.h>
using namespace std;

vector<int> vectr(vector<int> vec)
{
    int sum = 0;
    vector<int> pre(vec.size());
    pre[0] = vec[0];

    for (int i = 1; i <vec.size(); i++)
    {
        sum = vec[i]+pre[i-1];
        pre[i] = sum;
    }

    return pre;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> result = vectr(v);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}