#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll chia(ll a, ll b, ll c)
{
    if(b==1)
        return a%c;
    if(b==0)
        return 0;
    if(b%2==0)
        return 2 * chia(a, b/2, c) % c; // nhan 2 vi minh da chia 2 khi vao ham
    else    // phep nhan co tc giao hoan nen giam b hay a cung duoc!!!!
        return (a%c + 2 * chia(a, (b-1)/2, c)) % c; // a%c phong truong hop phan 2 * chia(a, (b-1)/2, c) =0
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<chia(a,b,c)<<endl;
    }
}