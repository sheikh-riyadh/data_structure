#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    bool flag = true;

    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    for (int i = 0; i < n2; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    if (q.size() == st.size())
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}