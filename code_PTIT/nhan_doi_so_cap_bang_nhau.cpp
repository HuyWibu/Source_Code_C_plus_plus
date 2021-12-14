#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005]={0};
		int b[100005]={0};
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		for(int i=0 ; i<n-1 ; i++)	// duyet tu dau toi cuoi mang
		{
			if(a[i]==a[i+1])		// neu a[i]=a[i+1] thi nhan doi a[i] va gan a[i+1] =0
			{
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		int d=0;
		for(int i=0 ; i<n ; i++)
		{
			if(a[i]!=0)
			{
				b[d]=a[i];
				d++;
			}
		}
		for(int i=0 ; i<n ; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
}
