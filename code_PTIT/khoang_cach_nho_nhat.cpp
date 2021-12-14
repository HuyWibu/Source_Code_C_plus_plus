#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000005];
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		int min=1000005;
		for(int i=0 ; i<n-1 ; i++)
		{
			for(int j=i+1 ; j<n ; j++)
			{
				if(a[j]<a[i])
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0 ; i<n-1 ; i++)
		{
			int m=a[i+1]-a[i];
			if(min>m) min=m;
		}
		cout<<min<<endl;
	}
	return 0;
}