#include<bits/stdc++.h>
using namespace std;

void Process()
{
    freopen("DATA.in", "r", stdin);
    int n, m; cin >> n >> m;
    // vector<int> a;
    // vector<int> b;
    map<int, int> mp;
    for(int i=0 ; i<n ; i++)
    {
        int x; cin >> x;
        // a.push_back(x);
        mp[x]++;
    }
    for(int i=0 ; i<m ; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    vector<int> v;
	for(auto it:mp)
	{
		if(it.second > 1)
			v.push_back(it.first);
	}
	sort(v.begin(), v.end());
	for(int i=0 ; i<v.size() ; i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{
    Process();
    return 0;
}