#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GCD(ll a, ll b)
{
    if(b == 0) return a;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
    int x = GCD(a, b);
    return (a * b) / x;
}

ll Preprocess(ll x, ll y, ll z)
{
    ll ans = LCM(x, y);
    ans = LCM(ans, z);
    return ans;
}

int dem(ll a)
{
    int dem = 0;
    while(a >= 10)
    {
        dem++;
        a /= 10;
    }
    return dem + 1;
}

void Process(ll ans, int n)
{
    int length = dem(ans);
    if(length > n)
    {
        cout << -1 << endl;
        return;
    }
    ll x = pow(10, n - 1);
    if(x % ans == 0)
    {   
        cout << x << endl;
        return;
    }
    ll tg = x / ans;
    tg++;
    cout << ans * tg << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll x, y, z;
        int n;
        cin >> x >> y >> z >> n;
        ll ans = Preprocess(x, y, z);
        Process(ans, n);
    }
}