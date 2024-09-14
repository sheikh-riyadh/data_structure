#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> my_list;
    list<int>::iterator it;
    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            my_list.push_front(v);
        }
        else if (x == 1)
        {
            my_list.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < my_list.size())
            {
                my_list.erase(next(my_list.begin(), v));
            }
        }
        cout << "L -> ";
        for (int val : my_list)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (int i = my_list.size()-1; i >= 0; i--)
        {
            it = next(my_list.begin(), i);
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}
