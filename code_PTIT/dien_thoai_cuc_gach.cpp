#include <iostream>
#include <string>
using namespace std;
int ktraTN(string s, int x)
{
	int d=0;
	int k=x-1;
	while(d<=k)
	{
		if(s[d]!=s[k])
		{
			return 0;
		}
		d++;
		k--;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,a;
		cin>>s;
		int x=s.length();
		for(int i=0 ; i<x ; i++)
		{
			if(s[i]=='a'||s[i]=='A'||s[i]=='b'||s[i]=='B'||s[i]=='c'||s[i]=='C')
			{
				a+="2";
			}
			if(s[i]=='D'||s[i]=='d'||s[i]=='E'||s[i]=='e'||s[i]=='F'||s[i]=='f')
			{
				a+="3";
			}
			if(s[i]=='G'||s[i]=='g'||s[i]=='H'||s[i]=='h'||s[i]=='I'||s[i]=='i')
			{
				a+="4";
			}
			if(s[i]=='J'||s[i]=='j'||s[i]=='K'||s[i]=='k'||s[i]=='L'||s[i]=='l')
			{
				a+="5";
			}
			if(s[i]=='M'||s[i]=='m'||s[i]=='N'||s[i]=='n'||s[i]=='O'||s[i]=='o')
			{
				a+="6";
			}
			if(s[i]=='P'||s[i]=='p'||s[i]=='Q'||s[i]=='q'||s[i]=='R'||s[i]=='r'||s[i]=='S'||s[i]=='s')
			{
				a+="7";
			}
			if(s[i]=='T'||s[i]=='t'||s[i]=='U'||s[i]=='u'||s[i]=='V'||s[i]=='v')
			{
				a+="8";
			}
			if(s[i]=='W'||s[i]=='w'||s[i]=='X'||s[i]=='x'||s[i]=='Y'||s[i]=='y'||s[i]=='Z'||s[i]=='z')
			{
				a+="9";
			}
		}
		if(ktraTN(a,a.size())==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
		
	}
}
