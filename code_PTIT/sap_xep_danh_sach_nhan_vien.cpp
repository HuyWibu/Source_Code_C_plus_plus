#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ma_nv, ho_ten, gt, ngay_sinh, dc, ngay_ky, mst;
    string ngay, thang, nam;
};
void xu_ly(NhanVien &x)
{
    if (x.ngay_sinh[1] == '/')
        x.ngay_sinh = "0" + x.ngay_sinh;
    if (x.ngay_sinh[4] == '/')
        x.ngay_sinh.insert(3, "0");
    if (x.ngay_ky[1] == '/')
        x.ngay_ky = "0" + x.ngay_ky;
    if (x.ngay_ky[4] == '/')
        x.ngay_ky.insert(3, "0");
}
void nhap(NhanVien &x)
{
    scanf("\n");
    getline(cin, x.ho_ten);
    cin >> x.gt;
    cin >> x.ngay_sinh;
    scanf("\n");
    getline(cin, x.dc);
    cin >> x.mst;
    cin >> x.ngay_ky;
    xu_ly(x);
    x.ngay = "";
    x.thang = "";
    x.nam = "";
    x.ngay = x.ngay + x.ngay_sinh[3] + x.ngay_sinh[4];
    x.thang = x.thang + x.ngay_sinh[0] + x.ngay_sinh[1];
    x.nam = x.nam + x.ngay_sinh[6] + x.ngay_sinh[7] + x.ngay_sinh[8] + x.ngay_sinh[9];
}
bool cmp(NhanVien a, NhanVien b)
{
    if(a.nam==b.nam && a.thang==b.thang)
        return a.ngay<b.ngay;
    if(a.nam==b.nam)
        return a.thang<b.thang;
    return a.nam<b.nam;
}
void sapxep(NhanVien x[], int n)
{
    // nhap ma_nv
    string s = "000";
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        int tg = k;
        if (k < 10)
            x[i].ma_nv = s + "0" + to_string(tg);
        else
            x[i].ma_nv = s + to_string(tg);
        k++;
    }
    sort(x, x + n, cmp);
}
void inds(NhanVien x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i].ma_nv << " " << x[i].ho_ten << " " << x[i].gt << " ";
        cout << x[i].ngay_sinh << " " << x[i].dc << " " << x[i].mst << " ";
        cout << x[i].ngay_ky << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}