#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            st.push(c);
            if (st.top() != '0')
            {
                char v = st.top();
                st.pop();
                if (!st.empty())
                {
                    if (v != st.top())
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(v);
                    }
                }
                else
                {
                    st.push(v);
                }
            }
            else if (st.top() != '1')
            {
                char v = st.top();
                st.pop();
                if (!st.empty())
                {
                    if (st.top() != v)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(v);
                    }
                }
                else
                {
                    st.push(v);
                }
            }
        }

        if (!st.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}