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
		if (b.size() > a.size())
            swap(a, b);
        if (a.size() == b.size() && b > a)
            swap(a, b);
        int max=a.length();
		if(b.size()<max)
		{
			int k=max-b.size();
			for(int i=1 ; i<=k ; i++)
			{
				b="0"+b;
			}
		}	
		int i=max-1;
		int muon=0;
		while(i>=0)
		{
			int m=(a[i]-'0')-(b[i]-'0')-muon;
			muon=0;
			if(m>=0)
			{
				s=char(m+'0')+s;
			}
			else
			{
				m=m+10;
				muon=1;
				s=char(m+'0')+s;	
			}
			i--;	
		}
		for(int i=0 ; i<s.size() ; i++)
			cout<<s[i];
		cout<<endl;
	}	
}
