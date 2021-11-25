#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo
{
    ll tu;
    ll mau;
};
ll BCNN(ll a, ll b)
{
    ll m = a;
    ll n = b;
    while (b != 0)
    {
        ll c = a % b;
        a = b;
        b = c;
    }
    return (m * n) / a;
}
ll UCLN(ll a, ll b)
{
    while (b != 0)
    {
        ll c = a % b;
        a = b;
        b = c;
    }
    return a;
}
void rut_gon(PhanSo &x)
{
    ll ans = UCLN(x.tu, x.mau);
    x.tu /= ans;
    x.mau /= ans;
}   
void process(PhanSo a, PhanSo b)
{
    PhanSo c;
    ll mc = BCNN(a.mau, b.mau);
    ll k, m; // ca tu va mau pso a nhan vs k, tuong tu voi m
    k = mc / a.mau;
    m = mc / b.mau;
    a.tu = a.tu * k;
    b.tu = b.tu * m;
    c.tu = (a.tu + b.tu) * (a.tu + b.tu);
    c.mau = mc * mc;
    rut_gon(c);
    PhanSo ans;
    a.mau = mc;
    b.mau = mc;
    ans.tu = a.tu * b.tu * c.tu;
    ans.mau = a.mau * b.mau * c.mau;
    rut_gon(ans);
    cout << c.tu << "/" << c.mau << " " << ans.tu << "/" << ans.mau << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}