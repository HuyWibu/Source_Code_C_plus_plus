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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0) break;
        cout << GCD(a, b) << " ";
        cout << LCM(a, b) << endl;
    }
    return 0;
}