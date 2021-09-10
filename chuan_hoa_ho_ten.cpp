#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int x;
		char a[100][100]={0};
		string s;
		cin>>x;
		cin.ignore();
		getline(cin,s);
		int n=0,m=0;
		for(int i=0 ; i<s.size() ; i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				s[i]+=32;
			}
		}
		for(int i=0 ; i<s.size() ; i++)
		{
			if(s[i]==' ')
			{
				while(s[i]==' ')
				{
					i++;
				}
				i--;
				n++;
				m=0;
			}
			else
			{
				a[n][m]=s[i];
				m++;
			}
		}
		if(x==1)
		{
			if(a[n][0]>='a' && a[n][0]<='z')
			{
				a[n][0]-=32;
			}
			cout<<a[n]<<" ";
			for(int i=0 ; i<n ; i++)
			{
				if(a[i][0]>='a' && a[i][0]<='z')
				{
					a[i][0]-=32;
				}
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i=1 ; i<=n ; i++)
			{
				if(a[i][0]>='a' && a[i][0]<='z')
				{
					a[i][0]-=32;
				}
				cout<<a[i]<<" ";
			}
			if(a[0][0]>='a' && a[0][0]<='z')
			{
				a[0][0]-=32;
			}
			cout<<a[0]<<endl;
		}
	}
}
