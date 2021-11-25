#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
        string ma, ten, gt, ns, mst, hd, dc;
        static int dem;
        string ngay, thang, nam;
    public:
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
        friend bool operator < (NhanVien, NhanVien);
};

int NhanVien::dem=0;

istream& operator >> (istream& in, NhanVien& a){
    a.dem ++;
    a.ma = "00" + string(3-to_string(a.dem).size(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    in >> a.gt;
    in >> a.ns;
    scanf("\n");
    getline(in, a.dc);
    in >> a.mst;
    in >> a.hd;
    a.ngay = a.ns.substr(3,2);
    a.thang = a.ns.substr(0,2);
    a.nam = a.ns.substr(6,4);
    return in;
}

ostream& operator << (ostream& out, NhanVien a){
    out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
    return out;
}

bool operator < (NhanVien a, NhanVien b){
    if(a.nam == b.nam){
        if(a.thang == b.thang)
            return a.ngay < b.ngay;
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}

void sapxep(NhanVien a[], int n){
    sort(a, a+n);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}