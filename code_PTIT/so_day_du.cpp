#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s[0]=='0')
		{
			cout<<"INVALID";
		}
		else
		{
			int a[1005]={0};
			int x=s.length();
			bool check=true;
			for(int i=0 ; i<x ; i++)
			{
				if(s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9')
				{
					check=false;
					break;
				}
				else
				{
					a[s[i]-'0']=1;
				}
			}
			if(check==false)
			{
				cout<<"INVALID";
			}
			else
			{
				int d=0;
				for(int i=0 ; i<10 ; i++)
				{
					if(a[i]==0)
					{
						cout<<"NO";
						d=1;
						break;
					}
				}
				if(d==0)
					cout<<"YES";
			}
		}
		cout<<endl;
	}
}
