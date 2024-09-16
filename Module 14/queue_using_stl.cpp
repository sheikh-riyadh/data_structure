#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> my_queue;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        my_queue.push(v);
    }
    while (!my_queue.empty())
    {
        cout<<my_queue.front()<<endl;
        my_queue.pop();
    }
    

    return 0;
}