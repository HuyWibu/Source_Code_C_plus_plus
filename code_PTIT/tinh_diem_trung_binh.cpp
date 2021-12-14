#include <bits/stdc++.h>
using namespace std;
double a[100005];
int n;
int main()
{
	cin>>n;
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    sort(a,a+n);
	double s=0;
    int l=0;
    while(a[l]==a[l+1])
    {
        l++;
    }
    l++;
    int r=n-1;
    while(a[r]==a[r-1])
    {
        r--;
    }
    r--;
	for (int i=l;i<=r;i++){
		s+=a[i];
	}
	double tb = s/(r-l+1);
	cout<<fixed<<setprecision(2)<<tb;
}