#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		int x=s.length();
		string copy=s;
		for(int j=0 ; j<x ; j++)
		{
			if((copy[j]>='A'&&copy[j]<='Z')||(copy[j]>='a'&&copy[j]<='z'))
			{
				copy[j]='*';
			}
		}
		int i=0;
		long long sum=0;
		while(i<x)
		{
			while(copy[i]=='*')
			{
				i++;
			}
			while(copy[i]!='*'&&copy[i]!=NULL)
			{
				sum+=(copy[i]-'0');
				i++;
			}
		}
		int a[100005];
		int d=0;
		for(int i=0 ; i<x ; i++)
		{
			if((s[i]>='A'&&s[i]<='Z'))
			{
				a[d]=s[i];
				d++;
			}
		}
		sort(a,a+d);
		for(int i=0 ; i<d ; i++)
		{
			cout<<(char)a[i];
		}
		cout<<sum<<endl;
	}
}
