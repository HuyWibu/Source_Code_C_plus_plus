#include <iostream>
using namespace std;
int stop=0;
void khoitao(int a[], int k)
{
	for(int i=1 ; i<= k ; i++)
		a[i]=i;
}
void in(int a[], int k)
{
	for(int i=1 ; i<=k ; i++)
		cout<<a[i];
	cout<<" "; 
}
void sinh(int a[], int k, int n)
{
	int i=k;
	while(a[i]==n-k+i)
		i--;
	if(i==0)
		stop=1;
	else
	{
		a[i]++;
	}
	int p=a[i];
	while(i<=k)
		a[i++]=p++;
}
void tohop(int a[], int k, int n)
{
	do
	{
		in(a,k);
		sinh(a,k,n);
	}
	while(stop==0);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[10005]={0},k;
		cin>>n>>k;
		khoitao(a,k);
		tohop(a,k,n);
		stop=0;
		cout<<endl;
	}
}
