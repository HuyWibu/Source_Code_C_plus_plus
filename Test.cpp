#include <iostream>
#include <cmath>
using namespace std;
int check1(int n)
{
	int m=n;
	int sodao=0;
	while(m)
	{
		sodao=sodao*10+m%10;
		m/=10;
	}
	if(sodao==n) return 1;
	else return 0;
}
int check2(int n)
{
	if(check1(n)==0)
	{
		return 0;
	}
	else
	{
		while(n)
		{
			int m=n%10;
			if(m==0)
			{
				return 0;
			}
			n/=10;
		}
		return 1;
	}
}
int check3(int n)
{
	if(check1(n)==0||check2(n)==0)
	{
		return 0;
	}
	else
	{
		int sum=0;
		while(n)
		{
			sum+=n%10;
			n/=10;
		}
		if(sum%10==0)
		{
			return 1;
		}
		else
			return 0;
	}
}
int main()
{
	int N,M,K;
	cin>>N>>M>>K;
	int l=pow(10,5);
	int k=pow(10,6)-1;
	int dem1=0,dem2=0,dem3=0;
	for(int i=l ; i<=k ; i++)
	{
		if(check1(i))
		{
			dem1++;
		}
		if(check2(i))
		{
			dem2++;
		}
		if(check3(i))
		{
			dem3++;
		}
	}
	cout<<dem1<<" "<<dem2<<" "<<dem3<<endl;
	if(N<=dem1&&M<=dem2&&K<=dem3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;			// 900 1 1 : NO    50 100 50 : YES
}	

