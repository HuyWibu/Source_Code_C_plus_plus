#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int x;
bool check(int a, int b)		// ham check vs 2 bien so a b 
{
	return (abs(x - a) < abs(x - b));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n>>x;						// nhap n va x
		int a[n+2];
		for(int i=0 ; i<n ; i++)		// nhap mang a
		{
			cin>>a[i];
		}
		stable_sort(a,a+n,check);		// sap xep lai mang a voi dieu kien check voi stable_sort -----> bat buoc !!!!!!
		for(int i=0 ; i<n ; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

