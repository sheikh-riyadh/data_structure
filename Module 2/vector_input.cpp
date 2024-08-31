#include <bits/stdc++.h>
using namespace std;
int main()
{

    // First way
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
      cin>>v[i];
    }


    // Second way
    vector<int> v1;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       v1.push_back(x);
    }
    

    
    return 0;
}