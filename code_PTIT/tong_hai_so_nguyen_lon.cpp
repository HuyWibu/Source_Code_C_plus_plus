#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,s;
		cin>>a>>b;
		int x=a.length();
		int y=b.length();
		int max=x;
		if(max<y) max=y;
		if(max==x&&max!=y)
		{
			int k=max-y;
			for(int i=1 ; i<=k ; i++)
			{
				b="0"+b;
			}
		}
		if(max==y&&max!=x)
		{
			int k=max-x;
			for(int i=1 ; i<=k ; i++)
			{
				a="0"+a;
			}
		}	
		int i=max-1;
		int nho=0;
		while(i>=0)
		{
			int k=(a[i]-'0')+(b[i]-'0')+nho;
			nho=0;
			if(k<10)
			{
				s=char(k+'0')+s;
			}
			else
			{
				k=k%10;
				nho=1;
				s=char(k+'0')+s;	
			}
			i--;	
		}
		if(nho==1)
		{
			s="1"+s;
		}
		for(int i=0 ; i<s.size() ; i++)
			cout<<s[i];
		cout<<endl;
	}	
}
