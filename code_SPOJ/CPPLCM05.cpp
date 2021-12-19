#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GCD(ll a, ll b)
{
    if(b == 0) return a;
    return GCD(b, a%b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, x, y; cin >> a >> x >> y;
        int u = GCD(x, y);
        for(int i=0 ; i<u ; i++)
            cout << a;
        cout << endl;
    }
    return 0;
}