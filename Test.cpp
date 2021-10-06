#include <iostream>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct PhanSo
{
	ll tu,mau;
	
};
void nhap(PhanSo &n);
ll UCLN(ll a,ll b)
{
	ll c;
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
void rutgon(PhanSo &n)
{
	ll x=UCLN(n.tu,n.mau);
	n.tu/=x; n.mau/=x;
}
void nhap(PhanSo &n)
{
	cin>>n.tu>>n.mau;
}
void in(PhanSo &n)
{
	cout<<n.tu<<"/"<<n.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
