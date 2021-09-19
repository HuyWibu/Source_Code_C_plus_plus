// Tim so nho nhat co N chu so 
// Chia het cho x, y, z.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll GCD(ll x, ll y)
{ //tim USCLN cua X va Y
	while(y!=0)	
	{
		ll r = x%y; x=y; y=r;
	}
	return x;
}
ll LCM(int x, int y, int z) 
{ //Tim BSCNH cua X, Y, Z
	ll p = GCD(x,y);
	ll k = (x*y)/p;
	ll m = GCD(k,z);
	ll Result = (k*z)/m;
	return Result;
}
ll Xuly(int n, int x, int y, int z) 
{    
    ll  bcnn = LCM(x, y, z);//tim boi chung nho nhat cua X, Y, Z     
    ll  n_cso = (ll) pow(10, n-1);//Lay so nguyen nho nhat co n chu so    
    ll du = n_cso % bcnn;//lay phan du hai so     
    if (du == 0) //neu phan du la 0
         return n_cso;
    n_cso = n_cso + (bcnn - du);//cong voi hieu nay     
    if (n_cso < (ll)pow(10, n))//chu y mat test cho nay
        return n_cso;
    else
        return 0;
}
int main() 
{
	int t;
	cin>>t;
    while(t--){
		ll  n, x, y , z ;
    	cin>>x>>y>>z>>n;
    	ll kq = Xuly(n, x, y, z);	
    	if (kq != 0)
        	cout << kq <<endl;
    	else
        	cout << "-1"<<endl; 	
	} 
}
