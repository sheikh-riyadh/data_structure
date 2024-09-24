#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    getchar();
    for (int i = 0; i < test_case; i++)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        string max_word;
        int max_count = 0;
        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max_count)
            {
                max_count = mp[word];
                max_word = word;
            }
        }

        cout << max_word << " " << max_count << endl;
    }

    return 0;
}
