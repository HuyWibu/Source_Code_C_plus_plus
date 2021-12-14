#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
        string ma, ten, gt, ns, dc, mst, hd;
    public:
        void nhap();
        void xuat();

};

void NhanVien::nhap(){
    getline(cin, ten);
    cin >> gt;
    cin >> ns;
    scanf("\n");
    getline(cin, dc);
    cin >> mst;
    cin >> hd;
}

void NhanVien::xuat(){
    this->ma = "00001";
    cout << this->ma << " " << this->ten << " " << this->gt << " " << this->ns << " ";
    cout << this->dc << " " << this->mst << " " << this->hd << endl;
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}