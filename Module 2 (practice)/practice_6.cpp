#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<string>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }

    cout<<endl<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        char first_index_value = v[i].front();
        char new_value = v[i].front()-32;
        replace(v[i].begin(),v[i].begin()+1,first_index_value,new_value);
        
    }
    for (int i = 0; i < v.size(); i++)
    {

        cout<<v[i]<<endl;
        
    }
    
    
    return 0;
}