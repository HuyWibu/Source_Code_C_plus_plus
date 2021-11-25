#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        double gpa;
        static int dem;
    public:
        SinhVien();
        void tangdem();
        int getDem();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};

SinhVien::SinhVien(){
    this->ma = this->ten = this->lop = this->ns = "";
    this->gpa = 0;
}

int SinhVien::getDem(){
    return this->dem;
}

int SinhVien::dem=0;

void SinhVien::tangdem(){
    dem++;
}

istream& operator >> (istream& in, SinhVien& a){
    a.dem ++;
    a.ma = "B20DCCN" + string(3-to_string(a.dem).length(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    in >> a.lop;
    in >> a.ns;
    in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    for(int i=0 ; i<a.ns.size() ; i++){
        if(i==1 && a.ns[i] == '/'){
            a.ns = "0" + a.ns;
        }
        if(i==4 && a.ns[i] == '/'){
            a.ns.insert(3,"0");
        }
    }
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}