#include <iostream>
using namespace std;
typedef long long ll;   
ll GCD(ll a, ll b)  // tìm UCLN của 2 số a,b
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,x,y;
        cin>>a>>x>>y;
        ll m=GCD(x,y);
        for(int i=0 ; i<m ; i++)
            cout<<a;
        cout<<endl;
    }
    return 0;
}