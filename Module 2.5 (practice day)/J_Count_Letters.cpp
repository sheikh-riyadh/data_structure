#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> count(26);
    for (int i = 0; i < s.size(); i++)
    {
        int value = s[i] - 'a';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << char(i + 97) << " : " << count[i] << endl;
        }
    }
    return 0;
}