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

    int old_value, new_value;
    cin >> old_value >> new_value;
    int find_value;
    cin >> find_value;
    replace(v.begin(), v.end(), old_value, new_value);

    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), find_value);

    if (it != v.end())
    {
        cout << it-v.begin();
    }
    else
    {
        cout << *it;
    }

    return 0;
}