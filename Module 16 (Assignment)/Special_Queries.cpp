#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<string> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (command == 1)
        {
            if (!q.empty())
            {
                string s;
                s = q.front();
                q.pop();
                cout << s << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}