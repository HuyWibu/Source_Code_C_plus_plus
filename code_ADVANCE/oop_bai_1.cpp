#include <bits/stdc++.h>
using namespace std;
// class : lop
// thuoc tinh: attribute
// Phuong thuc: method, behavior
// object: Doi tuong
// constructor : ham huy
// This pointer : this ->
// setter getter
// Encapsulation: Dong goi
// Access Modifier
// Private
// Public
// Protected
// SV001=>SV002=>... : static dung chung 
// Friend function, class
// friend class GiaoVien;
// Operator Overload
class SinhVien
{
private:
    string id, ten, ns;
    double gpa;
    static int dem;
public:
    SinhVien();
    SinhVien(string, string, string, double);
    void nhap();
    void in();
    void tangdem();
    int getDem();
    // double getGpa();
    // void setGpa(double);
    // void setId(string);
    //~SinhVien();
    // friend void inthongtin(SinhVien); // ham ban 
    // yeu cau la chuan hoa ho ten moi khi nhap ten
    friend void chuanhoa(SinhVien&);
};


void chuanhoa(SinhVien &a)
{
    string res="";
    stringstream ss(a.ten);
    string token;
    while(ss >> token)
    {
        res += toupper(token[0]);
        for(int i=1 ; i<token.size() ; i++)
            res += tolower(token[i]);
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}
// void inthongtin(SinhVien a)
// {
//     cout << a.id << " " << a.ten << " " <<a.ns << " " << endl;
// }

int SinhVien::getDem()
{
    return dem;
}

int SinhVien::dem=0;

void SinhVien::tangdem()
{
    dem ++;
}

SinhVien::SinhVien()
{
    //cout << "Ham nay da duoc khoi tao!!!\n";
    this->id = this->ten = this->ns="";
    this->gpa=0;
}

SinhVien::SinhVien(string ma, string name, string birth, double diem)
{
    //cout << "Ham co tham so truyen vao da duoc khoi tao!\n";
    this->id = ma;
    this->ten = name;
    this->ns = birth;
    this->gpa = diem;
}

// SinhVien::~SinhVien()
// {
//     //cout << "Ham duoc huy tai day!!\n";
// }

// double SinhVien::getGpa()
// {
//     return this->gpa;
// }

// bool cmp(SinhVien a, SinhVien b)
// {
//     return a.getGpa() > b.getGpa();
// }

void SinhVien::nhap()
{
    dem++; // dem = 1
    // cout << "Nhap id: ";
    // cin >> this->id;
    this->id = "SV" + string(3-to_string(dem).length(), '0') + to_string(dem);
    // dem =1 ; SV + 00 + 1
    cout << "Nhap ho ten: ";
    getline(cin, this->ten);
    cout << "Nhap ngay sinh: ";
    cin >> this->ns;
    cout << "Nhap diem gpa: ";
    cin >> this->gpa;
    cin.ignore();
}

void SinhVien::in()
{
    cout << this->id << " " << this->ten << " " << this->ns << " " << fixed << setprecision(2) << this->gpa << endl;
}

int main()
{
    SinhVien x;
    x.nhap();
    chuanhoa(x);
    x.in();
    // x.in();
    // // x.tangdem();
    // // x.tangdem();
    // SinhVien y; 
    // y.nhap();
    // y.in();
    // // y.tangdem();
    // // SinhVien z;
    // cout << z.getDem() << endl;
    return 0;
}