#include <bits/stdc++.h>
using namespace std;
struct mat_hang
{
    int stt;
    string ten,nhom;
    double mua,ban,loi_nhuan;
    void nhap()
    {
        scanf("\n");
        getline(cin,ten);
        getline(cin,nhom);
        cin>>mua>>ban;
    }
    bool operator< (const mat_hang other)
    {
        return other.loi_nhuan<loi_nhuan;
    }
    void in()
    {
        cout<<stt<<" "<<ten<<" "<<nhom<<" ";
        cout<<fixed<<setprecision(2)<<loi_nhuan<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    int k=1;
    mat_hang ds[100];
    for(int i=0 ; i<n ; i++)
    {
        ds[i].stt=k;
        ds[i].nhap();
        ds[i].loi_nhuan=ds[i].ban-ds[i].mua;
        k++;
    }
    sort(ds,ds+n);
    for(int i=0 ; i<n ; i++)
    {
        ds[i].in();
    }
}