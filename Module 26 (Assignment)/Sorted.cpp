#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        set<int> l;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            l.insert(value);
        }

        for (auto val : l)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}