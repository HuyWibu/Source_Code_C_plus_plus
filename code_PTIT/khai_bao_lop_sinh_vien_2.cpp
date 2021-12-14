#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        double gpa;
    public:
        SinhVien();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};

SinhVien::SinhVien(){
    this->ma = this->ten = this->lop = this->ns = "";
    this->gpa = 0;
}

istream& operator >> (istream& in, SinhVien& a){
    getline(in, a.ten);
    cin >> a.lop;
    cin >> a.ns;
    cin >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    a.ma = "B20DCCN001";
    string x = a.ns;
    for(int i=0 ; i<x.size() ; i++){
        if(i==1 && x[i] == '/'){
            x = "0" + x;
        }
        if(i==4 && x[i] == '/'){
            x.insert(3,"0");
        }
    }
    out << a.ma << " " << a.ten << " " << a.lop << " " << x << " " << fixed << setprecision(2) << a.gpa;
    out << endl;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}