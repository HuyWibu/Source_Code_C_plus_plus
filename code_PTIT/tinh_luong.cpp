#include <bits/stdc++.h>
using namespace std;
struct nv{
    string ho_ten, chuc_vu;
    int luong_co_ban, ngay_cong, luong_thang, thuong, phu_cap, thu_nhap;
    void nhap()
    {
        getline(cin, ho_ten);
        cin >> luong_co_ban;
        cin >> ngay_cong;
        cin >> chuc_vu;
        luong_thang = luong_co_ban * ngay_cong;
        if (ngay_cong >= 25)
            thuong = luong_thang * 0.2;
        else if (ngay_cong >= 22 && ngay_cong < 25)
            thuong = luong_thang * 0.1;
        else
            thuong = 0;
        if (chuc_vu == "GD")
            phu_cap = 250000;
        else if (chuc_vu == "PGD")
            phu_cap = 200000;
        else if (chuc_vu == "TP")
            phu_cap = 180000;
        else
            phu_cap = 150000;
        thu_nhap = luong_thang + thuong + phu_cap;
    }
    void in(){
        cout << "NV01" << " " << ho_ten << " " << luong_thang << " " << thuong << " " << phu_cap << " " << thu_nhap << endl;
    }
};
int main(){
    nv a;
    a.nhap();
    a.in();
}
// Bui Thi Trang
// 45000
// 23
// PGD