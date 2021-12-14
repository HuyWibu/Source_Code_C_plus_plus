#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep{
    private:
        string ma, ten;
        int sv;
    public:
        friend istream& operator >> (istream&, DoanhNghiep&);
        friend ostream& operator << (ostream&, DoanhNghiep);
        friend bool operator < (DoanhNghiep, DoanhNghiep);
        int getSv();
};

istream& operator >> (istream& in, DoanhNghiep& a){
    in >> a.ma;
    scanf("\n");
    getline(in, a.ten);
    in >> a.sv;
    return in;
}

ostream& operator << (ostream& out, DoanhNghiep a){
    out << a.ma << " " << a.ten << " " << a.sv << endl;
    return out;
}

int DoanhNghiep::getSv(){
    return this->sv;
}

bool operator < (DoanhNghiep a, DoanhNghiep b){
    if(a.sv == b.sv){
        return a.ma < b.ma;
    }
    return b.sv < a.sv;
}

// bool check(int a, int b, int x){
//     return x >= a && x <= b;
// }

int main(){
    int n; cin >> n;
    DoanhNghiep ds[100];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    sort(ds, ds+n);
    int Q; cin >> Q;
    while(Q--){
        int a,b; cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for(int i=0 ; i<n ; i++){
            if(ds[i].getSv() >= a && ds[i].getSv() <= b){
                cout << ds[i];
            }
        }
    }
    return 0;
}

// 4
// VIETTEL
// TAP DOAN VIEN THONG QUAN DOI VIETTEL
// 40
// FSOFT
// CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
// 300
// VNPT
// TAP DOAN BUU CHINH VIEN THONG VIET NAM
// 200
// SUN
// SUN*
// 50
// 1
// 30 50