#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	for(int i=1 ; i<=10 ; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	cout << binary_search(v.begin(), v.end(), 10) << endl;
	return 0;
}