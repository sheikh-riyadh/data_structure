#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_back();
    }
    int top()
    {
        return myList.back();
    }
    int empty()
    {
        return myList.size() == 0 ? true : false;
    }
    int size()
    {
        return myList.size();
    }
};
int main()
{

    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}