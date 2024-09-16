#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st1.push(v);
    }

    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}