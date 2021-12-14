#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        double gpa;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        void chuanhoa();
};

void SinhVien::chuanhoa(){
    // chuan hoa ho ten

    string s = this->ten;
    stringstream ss(s);
    string token, res="";
    while(ss >> token){
        res += toupper(token[0]);
        for(int i=1 ; i<token.length() ; i++){
            res+= tolower(token[i]);
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

istream& operator >> (istream& in, SinhVien& a){
    a.ma = "B20DCCN001";
    scanf("\n");
    getline(in, a.ten);
    in >> a.lop;
    in >> a.ns;
    in >> a.gpa;
    a.chuanhoa();
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " ";
    out << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

// NguyEn hoa BiNH
// D20CQCN04-B
// 2/2/2002
// 2