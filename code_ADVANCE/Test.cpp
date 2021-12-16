#include <bits/stdc++.h>
using namespace std;

class QuanLyMayTinh
{
    private:
        string maSP, tenHangSX, Mau, NgaySX;
        long GiaBan;
    public:
        QuanLyMayTinh();
        friend istream &operator >> (istream &, QuanLyMayTinh &);
        friend ostream &operator << (ostream &, QuanLyMayTinh);
        long getGia();
};

QuanLyMayTinh::QuanLyMayTinh()
{
    this->maSP = "";
    this->tenHangSX = "";
    this->Mau = "";
    this->NgaySX = "";
    this->GiaBan = 0;
}

istream &operator>>(istream &is, QuanLyMayTinh &obj)
{
    cout << "Nhap maSP: ";
    is >> obj.maSP;
    cout << "Nhap tenHangSX: ";
    scanf("\n");
    getline(is, obj.tenHangSX);
    cout << "Nhap Mau: ";
    getline(is, obj.Mau);
    cout << "Nhap NgaySX: ";
    is >> obj.NgaySX;
    cout << "Nhap GiaBan: ";
    is >> obj.GiaBan;
    return is;
}
ostream &operator<<(ostream &os, QuanLyMayTinh obj)
{
    cout << "maSP: " << obj.maSP << endl;
    cout << "tenHangSX: " << obj.tenHangSX << endl;
    cout << "Mau: " << obj.Mau << endl;
    cout << "NgaySX: " << obj.NgaySX << endl;
    cout << "GiaBan: " << obj.GiaBan << endl;
    return os;
}

long QuanLyMayTinh::getGia()
{
    return this->GiaBan;
}

bool cmp(QuanLyMayTinh a, QuanLyMayTinh b)
{
    return a.getGia() > b.getGia();
}

int main()
{
    cout << "Nhap So Luong san pham: ";
    int n;
    cin >> n;
    QuanLyMayTinh *arr = new QuanLyMayTinh[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        cout << endl;
    }
    sort(arr, arr + n, cmp);
    cout << "In ra ket qua nhap" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl;
    return 0;
}