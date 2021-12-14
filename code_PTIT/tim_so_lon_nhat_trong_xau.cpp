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
		for(int j=0 ; j<x ; j++)
		{
			if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
			{
				s[j]='*';
			}
		}
		int i=0;
		long long max=0;
		while(i<x)
		{
			while(s[i]=='*')
			{
				i++;
			}
			int a=0;
			while(s[i]!='*'&&s[i]!=NULL)
			{
				a=a*10+(s[i]-'0');
				i++;
			}
			if(max<a) max=a;
		}
		cout<<max<<endl;
	}
}
