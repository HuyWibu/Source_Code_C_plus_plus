#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+2],b[m+2],c[m+n+2],danhdau[n+2]={0};		// khai bao mang kem vs mang danh dau
		set<int>tmp;
		set<int>trung;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			tmp.insert(a[i]);
		}
		for(int i=0 ; i<m ; i++)	
		{
			cin>>b[i];
			if (tmp.find(b[i]) != tmp.end()) // tim phan tu b[i] bi trung vs a[i]
                trung.insert(b[i]);
            tmp.insert(b[i]);
		}
		for (int x : tmp)
            cout << x << " ";
        cout << endl;
        for (int x : trung)
            cout << x << " ";
        cout << endl;
	}
}
