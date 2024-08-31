#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<endl;
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    cout << "Max size of vector: " << v.max_size() << endl;

    v.resize(20, 0);
    cout << "After resize of size: " << v.size() << endl;
    cout << "After resize of capacity: " << v.capacity() << endl;
    v.clear();
    cout << "After clear of size: " << v.size() << endl;
    cout << "After clear of capacity: " << v.capacity() << endl;
    cout << v.empty() << endl;
    v.resize(10, 100);

    cout << "After resize of size: " << v.size() << endl;
    cout << "After resize of capacity: " << v.capacity() << endl;

    for (int res : v)
    {
        cout << res << " ";
    }
    return 0;
}