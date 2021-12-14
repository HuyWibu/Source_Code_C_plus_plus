#include <iostream>
#include <string>
int tinhtong(int n)
{
		int sum=0;
		while(n)
		{
			sum+=n%10;
			n/=10;
		}
		if(sum<10)
		return sum;
		else
		return tinhtong(sum);
}
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int x=s.size();
		int sum=0;
		for(int i=0 ; i<x ; i++)
		{
			sum+=(s[i]-'0');
		}
		
		if(tinhtong(sum)==9)
		{
			cout<<"1";
		}
		else
			cout<<"0";
		cout<<endl;
	}
}
