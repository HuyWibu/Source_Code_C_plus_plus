#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GCD(ll a, ll b)
{
    if(b==0) return a;
    return GCD(b, a%b); 
}

ll LCM(ll a, ll b)
{
    int x = GCD(a, b);
    return (a*b) / x;
}

void Process(int n)
{
    ll ans = 1;
    for(int i=2 ; i<=n ; i++)
    {
        ans = LCM(ans, i);
    }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        Process(n);
    }
    return 0;
}