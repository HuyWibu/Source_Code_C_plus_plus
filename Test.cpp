#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
int songuyento(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int check(ll n)
{
    int p = 2;
    int c;
    ll a;
    do
    {
        if (songuyento(p))
        {   
            a=1;
            for(int i=0;i<p;i++) a*=2;
             c = a*(a-1)/2;
            if (c == n)
                return 1;
        }
        else
            p++;
    } while (c < n);
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (check(n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}