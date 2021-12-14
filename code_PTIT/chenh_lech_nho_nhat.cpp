#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[10000005];
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int min=10000005;
		for(int i=0 ; i<n-1 ; i++)
		{
			int x=a[i+1]-a[i];
			if(min>x) min=x;
		}
		cout<<min<<endl;
	}
	return 0;
}