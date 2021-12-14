#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll ucln(ll x, ll y)
{
	ll z;
	while(y)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return x;
}
ll bcnn(ll x, ll y, ll z)
{
	ll m=x*y/ucln(x,y);
	return m*z/ucln(m,z);
}
ll mu(int n)
{
	if(n==0)
		return 1;
	return 10*mu(n-1);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int d=0;
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		ll m=bcnn(x,y,z);
		ll min=mu(n-1)/m+1;
		if(mu(n-1)%m==0)
		{
			min--;
		}
		ll max=(mu(n)-1)/m;
		if (min <= max)
            cout << m*min << endl;
        else
            cout << "-1\n";
	}
	return 0;
}
