#include <bits/stdc++.h>
using namespace std;
struct ds
{
    int key;
    int val;
};
int main()
{
    int x;
    vector<int> v;
    map<int, int> mp;
    while (cin >> x)
    {
        v.push_back(x);
        mp[x]++;
    }
    int n = v.size();
    ds a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].key = v[i];
        a[i].val = mp[v[i]];
    }
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (b[a[i].key] == 0)
        {
            cout << a[i].key << " " << a[i].val << endl;
            b[a[i].key] = 1;
        }
    }
}