#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DATA.in", "r", stdin);
    int x;
    map<int, int> mp;
    while (cin >> x)
    {
        mp[x]++;
    }
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
}