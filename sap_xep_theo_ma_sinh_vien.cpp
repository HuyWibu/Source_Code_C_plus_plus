#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, email;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        friend bool operator < (SinhVien, SinhVien);
};

istream& operator >> (istream& in, SinhVien& a){
    in >> a.ma;
    scanf("\n");
    getline(in, a.ten);
    in >> a.lop;
    in >> a.email;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}

bool operator < (SinhVien a, SinhVien b){
    return a.ma < b.ma;
}

void sapxep(SinhVien a[], int n){
    sort(a, a+n);
}

int main(){
    SinhVien ds[1000];
    int n=0; 
    while(cin >> ds[n++]);
    sapxep(ds, n);
    for(int i=0 ; i<n ; i++){
        cout << ds[i];
    }
}