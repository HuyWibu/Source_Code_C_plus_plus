#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[100005];
bool swapcompare(string a, string b)
{
	if(a+b>b+a)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>s[i];
		}
		// sap xep mang voi dieu kien
		sort(s,s+n,swapcompare);
		for(int i=0 ; i<n ; i++)
			cout<<s[i];
		cout<<endl;
	}
}
