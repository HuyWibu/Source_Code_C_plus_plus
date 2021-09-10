#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s1,s2;
		string a[100][100]={0};
		string b[100][100]={0};
		getline(cin,s1);
		getline(cin,s2);
		// loai bo trung nhau trong xau 1
		int m=0,n=0;
		int x=0,y=0;
		for(int i=0 ; i<s1.size() ; i++)
		{
			if(s1[i]==' ')
			{
				while(s1[i]==' ')
				{
					i++;
				}
				m=0;
				n++;
				i--;
			}
			else
			{
				a[n][m]=s1[i];
				m++;
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=i+1 ; j<=n ; j++)
			{
				if(a[i]==a[j])
				{
					a[j][0]='*';
				}
			}
		}
		// tach tu xau 2
		for(int i=0 ; i<s2.size() ; i++)
		{
			if(s2[i]==' ')
			{
				while(s2[i]==' ')
				{
					i++;
				}
				x++;
				y=0;
				i--;
			}
			else
			{
				b[x][y]=s2[i];
				y++;
			}
		}
		// so sanh 2 xau
		int i=0;
		while(i<=x)
		{
			for(int k=0 ; k<=n ; k++)
			{
				if(a[k]==b[i])
				{
					a[k][0]='*';
				}
			}
			i++;
		}
		for(int i=0 ; i<=n ; i++)
		{
			if(a[i][0]!='*')
			{
				cout<<a[i]<<" ";	
			}	
		}
		cout<<endl;	
	}
}
