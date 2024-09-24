#include <bits/stdc++.h>
using namespace std;

class compare
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first > b.first)
        {
            return true;
        }
        else if (a.first == b.first)
        {
            if (a.second < b.second)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> pl;
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        string name;
        int id;
        cin >> name >> id;
        pl.push({name, id});
    }

    while (!pl.empty())
    {
        cout << pl.top().first << " " << pl.top().second<<"\n";
        pl.pop();
    }

    return 0;
}
