#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
        string ma, ten, gt, ns, mst, hd, dc;
        static int dem;
    public:
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
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
    return in;
}

ostream& operator << (ostream& out, NhanVien a){
    out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
    return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}