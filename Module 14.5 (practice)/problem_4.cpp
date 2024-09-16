#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> que;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        que.push(v);
    }

    while (!que.empty())
    {
        st.push(que.front());
        que.pop();
    }

    while (!st.empty())
    {
        que.push(st.top());
        st.pop();
    }
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }

    return 0;
}