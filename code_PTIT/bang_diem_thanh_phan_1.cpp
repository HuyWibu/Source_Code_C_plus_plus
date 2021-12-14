#include <bits/stdc++.h>
using namespace std;
struct SinhVien 
{
    string ma_sv;
    string ho_ten;
    string lop;
    double diem_1;
    double diem_2;
    double diem_3;
};
void nhap(SinhVien &a)
{
    cin>>a.ma_sv;
    scanf("\n");
    getline(cin,a.ho_ten);
    scanf("\n");
    cin>>a.lop;
    scanf("\n");
    cin>>a.diem_1>>a.diem_2>>a.diem_3;
}
void sap_xep(SinhVien a[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[i].ho_ten>a[j].ho_ten)
                swap(a[i],a[j]);
        }
    }
}
void in_ds(SinhVien a[], int n)
{
    int k=1;
    for(int i=0 ; i<n ; i++)
    {
        cout<<k<<" "<<a[i].ma_sv<<" "<<a[i].ho_ten<<" "<<a[i].lop<<" ";
        cout<<fixed<<setprecision(1)<<a[i].diem_1<<" ";
        cout<<fixed<<setprecision(1)<<a[i].diem_2<<" ";
        cout<<fixed<<setprecision(1)<<a[i].diem_3<<endl;
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}