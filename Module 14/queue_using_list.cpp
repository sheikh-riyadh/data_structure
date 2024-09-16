#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> my_list;

    void push(int val)
    {
        my_list.push_back(val);
    }
    void pop()
    {
        my_list.pop_front();
    }
    int front()
    {
        return my_list.front();
    }
    int size()
    {
        return my_list.size();
    }
    bool empty()
    {
        return my_list.empty();
    }
};
int main()
{

    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    

    return 0;
}