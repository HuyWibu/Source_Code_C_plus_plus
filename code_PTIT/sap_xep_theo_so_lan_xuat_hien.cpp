#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b)
{
    if(mp[a] != mp[b])
    {
        return mp[a] > mp[b];
    }
    else
    {
        return a < b;
    }  
}
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        mp.clear();
        cout << endl;
    }
    return 0;
}