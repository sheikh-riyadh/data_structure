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
            char value = st.top();
            st.pop();
            if (!st.empty())
            {
                char v = st.top();
                if (value == '1' && v == '0')
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
                st.push(value);
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