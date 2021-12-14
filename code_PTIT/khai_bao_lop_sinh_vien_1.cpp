#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, ns;
        double gpa;
    public:
        void nhap();
        void xuat();
};

void SinhVien::nhap(){
    this->ma = "B20DCCN001";
    getline(cin, this->ten);
    cin >> this->lop;
    cin >> this->ns;
    cin >> this->gpa;
}

void SinhVien::xuat(){
    string x = this->ns;
    for(int i=0 ; i<x.size() ; i++)
    {
        if(i==1 && x[i]=='/')
            x = "0" + x;
        if(i==4 && x[i]=='/')
            x.insert(3,"0");
    }
    cout << this->ma << " " << this->ten << " " << this->lop << " " << x << " ";
    cout << fixed << setprecision(2) << this->gpa << endl; 
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}