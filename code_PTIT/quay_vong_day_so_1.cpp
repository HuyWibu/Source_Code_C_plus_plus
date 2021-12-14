#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[10000005];
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		if(d>=n) d=d-n;
		for(int i=d ; i<n ; i++)
		{
			cout<<a[i]<<" ";
		}
		for(int i=0 ; i<d ; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}