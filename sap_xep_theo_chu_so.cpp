#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int s[100005];
bool decrease(int a, int b)
{
	if(a>b)
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
		sort(s,s+n,decrease);
		for(int i=0 ; i<n ; i++)
			cout<<s[i]<<" ";
		cout<<endl;
	}
}
