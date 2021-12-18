#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GCD(ll a, ll b)
{
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
    int x = GCD(a, b);
    return (a * b) / x;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << LCM(a, b) << " ";
        cout << GCD(a, b) << endl;
    }
    return 0;
}