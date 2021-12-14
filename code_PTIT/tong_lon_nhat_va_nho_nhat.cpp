#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void tinh(string s, ll &min, ll &max, int x)
{
	for(int i=0 ; i<x ; i++)
	{
		if(s[i]=='6')
			s[i]='5';
		min=min*10+(s[i]-'0');
		if(s[i]=='5')
			s[i]='6';
		max=max*10+(s[i]-'0');
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int x=s1.length();
		int y=s2.length();
		ll min1=0, min2=0, max1=0, max2=0;
		tinh(s1,min1,max1,x);
		tinh(s2,min2,max2,y);
		cout<<min1+min2<<" "<<max1+max2<<endl;
	}
}
