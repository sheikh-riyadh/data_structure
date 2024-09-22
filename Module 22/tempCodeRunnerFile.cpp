#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &v)
{

    v[0] = v[v.size() - 1];
    v.pop_back();
    int current_idx = 0;

    while (true)
    {
        int last_idx = v.size() - 1;
        int left_idx = (current_idx * 2) + 1;
        int right_idx = (current_idx * 2) + 2;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[current_idx])
            {
                swap(v[left_idx], v[current_idx]);
                current_idx = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[current_idx])
            {
                swap(v[right_idx], v[current_idx]);
                current_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] < v[current_idx])
            {
                swap(v[left_idx], v[current_idx]);
                current_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] < v[current_idx])
            {
                swap(v[right_idx], v[current_idx]);
                current_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }

    delete_heap(v);
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}