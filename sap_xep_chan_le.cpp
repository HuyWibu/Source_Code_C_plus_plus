#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[1005]={0},b[1005]={0};
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		sort(a,a+n);
		int d=0;
		int i=0;
		while(d<n)
		{
			b[d]=a[i];
			i++;
			d+=2;
		}
		d=1;
		while(d<n)
		{
			b[d]=a[i];
			i++;
			d+=2;
		}
		for(int i=0 ; i<n ; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
