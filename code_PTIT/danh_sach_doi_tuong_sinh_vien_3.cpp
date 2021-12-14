#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        double gpa;
        static int dem;
    public:
        SinhVien();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        void chuanhoa();
        double getGpa();
        friend bool operator < (SinhVien, SinhVien);
};

bool operator < (SinhVien a, SinhVien b){
    return b.gpa < a.gpa;
}

SinhVien::SinhVien(){
    this->ma = this->ten = this->lop = this->ns = "";
    this->gpa = 0;
}

int SinhVien::dem=0;

void SinhVien::chuanhoa(){
    // chuan hoa ho ten
    string res="";
    string token;
    string s = this->ten;
    stringstream ss(s);
    while(ss >> token){
        res += toupper(token[0]);
        for(int i=1 ; i<token.size() ; i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    this->ten = res;

    // chuan hoa ngay sinh
    string x = this->ns;
    for(int i=0 ; i<x.size() ; i++){
        if(i==1 && x[i]=='/'){
            x = "0" + x;
        }
        if(i==4 && x[i]=='/'){
            x.insert(3,"0");
        }
    }
    this->ns = x;
}

double SinhVien::getGpa(){
    return this->gpa;
}

istream& operator >> (istream& in, SinhVien& a){
    a.dem++;
    a.ma = "B20DCCN" + string(3-to_string(a.dem).size(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    in >> a.lop;
    in >> a.ns;
    in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    a.chuanhoa();
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

// bool cmp(SinhVien a, SinhVien b){
//     return a.getGpa() > b.getGpa();
// }

void sapxep(SinhVien ds[], int n){
    sort(ds, ds+n);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}