#include <bits/stdc++.h>
using namespace std;
struct Oxyz
{
    int tung;
    int hoanh;
    int cao;
    void nhap()
    {
        cin>>hoanh>>tung>>cao;
    }
};
Oxyz toa_do_vt(Oxyz a, Oxyz b)
{
    Oxyz x;
    x.hoanh=b.hoanh-a.hoanh;
    x.tung=b.tung-a.tung;
    x.cao=b.cao-a.cao;
    return x;
}
Oxyz tich_co_huong(Oxyz a, Oxyz b)
{
    Oxyz x;
    x.hoanh=a.tung*b.cao-b.tung*a.cao;
    x.tung=a.cao*b.hoanh-a.hoanh*b.cao;
    x.cao=a.hoanh*b.tung-a.tung*b.hoanh;
    return x;
}
int tich_vo_huong(Oxyz a, Oxyz b)
{
    return a.hoanh*b.hoanh+a.tung*b.tung+a.cao*b.cao;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Oxyz A,B,C,D;
        A.nhap(); B.nhap(); C.nhap() ; D.nhap();
        Oxyz AB, AC, AD;
        AB=toa_do_vt(A,B);
        AC=toa_do_vt(A,C);
        AD=toa_do_vt(A,D);
        // tinh tich co huong AB va AC ---> v=[AB AC]
        Oxyz v;
        v=tich_co_huong(AB,AC);
        if(tich_vo_huong(v,AD))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}