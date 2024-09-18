#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> lst;
    void push(int val)
    {
        lst.push_back(val);
    }
    void pop()
    {
        lst.pop_back();
    }
    int top()
    {
        return lst.back();
    }
    bool empty()
    {
        return lst.empty();
    }
};

class myQueue
{
public:
    list<int> lst;
    void push(int val)
    {
        lst.push_back(val);
    }
    void pop()
    {
        lst.pop_front();
    }
    int front()
    {
        return lst.front();
    }
    bool empty()
    {
        return lst.empty();
    }
};

int main()
{
    myQueue q;
    myStack st;
    bool flag = true;

    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    for (int i = 0; i < n2; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    if (n1 == n2)
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}