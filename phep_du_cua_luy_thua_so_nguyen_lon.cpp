#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;
ll mu(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a % m;
    else if (b % 2 == 0)
    {
//        ll k = mu(a, b / 2, m); 
        return mu(a, b / 2, m) % m * mu(a, b / 2, m) % m;
    }
    else
    {
//        ll k = mu(a, (b - 1) / 2, m);
        return (a % m) * mu(a, (b - 1) / 2, m) % m * mu(a, (b - 1) / 2, m) % m;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        ll b, m, n = 0;
        cin >> a >> b >> m;
        for (int i = 0; i < a.size(); i++)
        {
            n=(n*10+(a[i]-'0'))%m;
        }
        cout << mu(n, b, m) << endl;
    }
}
