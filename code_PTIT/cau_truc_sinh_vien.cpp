#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ho_ten;
    string lop;
    string ngay_sinh;
    float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.ho_ten);
    cin >> a.lop;
    cin >> a.ngay_sinh;
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a)
{
    int x = a.ngay_sinh.length();
    for (int i = 0; i < x; i++)
    {
        if (i == 1 && a.ngay_sinh[i] == '/')
        {
            a.ngay_sinh = "0" + a.ngay_sinh;
        }
        if (i == 4 && a.ngay_sinh[i] == '/')
        {
            a.ngay_sinh.insert(3, "0");
        }
    }
    cout << "N20DCCN001"
         << " " << a.ho_ten << " " << a.lop << " " << a.ngay_sinh << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}