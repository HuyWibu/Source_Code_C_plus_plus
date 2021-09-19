#include <iostream>
using namespace std;
typedef long long ll;

// Viết hàm tìm Ước chung lớn nhất của 2 số a,b
ll GCD(ll a, ll b)
{
    ll c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
// Viết hàm tìm Bội chung nhỏ nhất của n số
ll LCM(int n)
{
    ll x=1;
    ll i=2;
    while(i<=n)
    {
        x=(i*x)/GCD(i,x);
        i++;
    }
    return x;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<LCM(n)<<endl;
    }
    return 0;
}