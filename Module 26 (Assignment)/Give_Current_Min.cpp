#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        pr.push(value);
    }

    int oparetion;
    cin >> oparetion;

    for (int i = 0; i < oparetion; i++)
    {
        int op;
        cin >> op;

        if (op == 0)
        {
            int insert_new;
            cin >> insert_new;
            pr.push(insert_new);
            cout << pr.top() << endl;
        }
        else if (op == 1)
        {
            if (!pr.empty())
            {
                cout << pr.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (op == 2)
        {
            if (!pr.empty())
            {
                pr.pop();
            }
            if (!pr.empty())
            {
                cout << pr.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
