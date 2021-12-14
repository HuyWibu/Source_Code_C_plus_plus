#include <bits/stdc++.h>
using namespace std;

void ds(string a){
    cout << "DANH SACH SINH VIEN LOP " << a << ":" << endl;
}

class SinhVien{
    private:
        string ma, ten, lop, email;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        string getLop();
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

string SinhVien::getLop(){
    return this->lop;
}

int main(){
    int n; cin >> n;
    SinhVien ds[1000];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    int Q; cin >> Q;
    while(Q--){
        string khoa;
        cin >> khoa;
        string x = khoa.substr(2,2);
        cout << "DANH SACH SINH VIEN KHOA " << khoa << ":" << endl;
        for(int i=0 ; i<n ; i++){
            if(ds[i].getLop().substr(1,2) == x){
                cout << ds[i];
            }
        }
    }

}