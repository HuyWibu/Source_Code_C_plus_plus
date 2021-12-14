#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void khoi_tao(){
    cout << "Danh sach thao tac:\n";
    cout << "1 - In danh sach SV\n";
    cout << "2 - Them\n";
    cout << "3 - Sua\n";
    cout << "4 - Xoa\n";
    cout << "5 - Tim kiem\n";
    cout << "6 - Sap xep\n";
    cout << "7 - Sao luu\n";
    cout << "8 - Thoat\n";
}

class SinhVien{
    private:
        string ten, tuoi, name;
        int dem;
        double gpa;

    public:
        void chuan_hoa();
        void in();
        void sua();
        void them();
        void thong_ke();
        void thoat();
        void setTen(string);
        void setTuoi(string);
        void setDem(int);
        void setGpa(double);
        void save();
        string getTen();
        string getTuoi();
        double getGpa();
        int getDem();
        string getName();
        void setName(string);
};

void SinhVien::setTen(string x){
    this->ten = x;
}

void SinhVien::setTuoi(string x){
    this->tuoi = x;
}

void SinhVien::setDem(int x){
    this->dem = x;
}

void SinhVien::setGpa(double x){
    this->gpa = x;
}

string SinhVien::getTen(){
    return this->ten;
}

string SinhVien::getTuoi(){
    return this->tuoi;
}

double SinhVien::getGpa(){
    return this->gpa;
}

int SinhVien::getDem(){
    return this->dem;
}

void SinhVien::setName(string x){
    this->name = x;
}

string SinhVien::getName(){
    return this->name;
}

int doc_file(SinhVien ds[]){
    ifstream fp;
    fp.open("D:/SinhVien.txt");
    int n = 0;
    string x;
    while (getline(fp, x)){
        stringstream ss(x);
        string token, s[100];
        int i = 0;
        while (getline(ss, token, ';')){
            s[i] = token;
            i++;
        }
        ds[n].setTen(s[0]);
        ds[n].setTuoi(s[1]);
        double d = std::stod(s[2]);
        ds[n].setGpa(d);
        ds[n].setDem(n + 1);
        ds[n].chuan_hoa();
        n++;
    }
    fp.close();
    return n;
}

void save(SinhVien ds[], int n){
    ofstream fp;
    fp.open("D:/SinhVien.txt");
    for (int i = 0; i < n; i++){
        fp << ds[i].getTen() << ";" << ds[i].getTuoi() << ";" << ds[i].getGpa() << endl;
    }
}

void SinhVien::chuan_hoa(){
    string x = this->ten;
    string token, res = "";
    stringstream ss(x);
    while (ss >> token){
        res += toupper(token[0]);
        token[0] = tolower(token[0]);
        for (int i = 1; i < token.size(); i++){
            res += tolower(token[i]);
            token[i] = tolower(token[i]);
        }
        res += " ";
        this->setName(token);
    }
    res.erase(res.length() - 1);
    this->ten = res;
}

void SinhVien::them(){
    cout << "\tNhap ten: ";
    scanf("\n");
    getline(cin, this->ten);
    cout << "\tNhap tuoi: ";
    cin >> this->tuoi;
    cout << "\tNhap diem: ";
    cin >> this->gpa;
}

void SinhVien::sua(){
    cout << "\t[?] Ban muon sua ten, tuoi hay gpa? ";
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    if (s == "ten"){
        string x;
        cout << "\t[*] Nhap ten moi: ";
        scanf("\n");
        getline(cin, x);
        this->ten = x;
        cout << "\t[*] Da cap nhat ten thanh cong!\n";
    }
    else if (s == "tuoi"){
        string x;
        cout << "\t[*] Nhap tuoi moi: ";
        cin >> x;
        this->tuoi = x;
        cout << "\t[*] Da cap nhat tuoi thanh cong!\n";
    }
    else{
        double x;
        cout << "\t[*] Nhap diem moi: ";
        cin >> x;
        this->gpa = x;
        cout << "\t[*] Da cap nhat gpa thanh cong!\n";
    }
}

void SinhVien::in(){
    cout << "\t|    " << this->dem << "   |";
    for (int j = 0; j < 5; j++){
        cout << " ";
    }
    cout << this->ten;
    int x = this->ten.length() + 5;
    for (int i = 0; i < (30 - x); i++){
        cout << " ";
    }
    cout << "|   " << this->tuoi << "   |";
    cout << "  " << fixed << setprecision(2) << this->gpa << " |" << endl;
}

void in_thuong(string &s){
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

void tim_kiem(SinhVien ds[], int n, string tmp){
    SinhVien a[n + 1];
    for (int i = 0; i < n; i++){
        a[i] = ds[i];
        string temp = a[i].getTen();
        in_thuong(temp);
        a[i].setTen(temp);
    }
    bool check = false;
    for (int i = 0; i < n; i++){
        string token = a[i].getTen();
        if (token.find(tmp) != string::npos){
            check = true;
            cout << "\t";
            cout << ds[i].getDem() << " " << ds[i].getTen() << " " << ds[i].getTuoi();
            cout << " " << fixed << setprecision(2) << ds[i].getGpa() << endl;
        }
    }
    if (check == false){
        cout << "[?] Khong tim thay ket qua phu hop\n";
    }
}

bool cmp1(SinhVien a, SinhVien b){
    return a.getName() < b.getName();
}

bool cmp2(SinhVien a, SinhVien b){
    if(a.getTuoi() == b.getTuoi()){
        return a.getName() < b.getName();
    }
    return a.getTuoi() < b.getTuoi();
}

bool cmp3(SinhVien a, SinhVien b){
    if(a.getGpa() == b.getGpa()){
        return a.getName() < b.getName();
    }
    return a.getGpa() < b.getGpa();
}

bool cmp4(SinhVien a, SinhVien b){
    return a.getDem() < b.getDem();
}

int main(){
    SinhVien ds[1000];
    int n = doc_file(ds);
    string s = "";
    while (s != "N"){
        khoi_tao();
        cout << "[!] Nhap lenh: ";
        int cnt;
        cin >> cnt;
        switch (cnt){
        case 1:
            cout << "[1] In danh sach SV:\n";
            cout << "\t+--------+------------------------------+--------+-------+\n";
            cout << "\t|   STT  |             Ho ten           |  Tuoi  |  Diem |\n";
            cout << "\t+--------+------------------------------+--------+-------+\n";
            for (int i = 0; i < n; i++){
                ds[i].in();
            }
            cout << "\t+--------+------------------------------+--------+-------+\n";
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 2:
            cout << "[2] Them SV:\n";
            cout << "\t[!] Nhap thong tin cua SV moi:\n";
            ds[n].them();
            ds[n].chuan_hoa();
            n++;
            ds[n - 1].setDem(n);
            save(ds, n);
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 3:
            cout << "[3] Sua thong tin SV:\n";
            cout << "\t[!] Nhap STT cua SV muon sua: ";
            int x;
            cin >> x;
            ds[x - 1].sua();
            ds[x - 1].chuan_hoa();
            save(ds, n);
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 4:
            cout << "[4] Xoa SV:\n";
            cout << "\t[!] Nhap STT cua SV muon xoa: ";
            cin >> x;
            cout << "\t[!] Da xoa thanh cong sinh vien " << x << " !\n";
            x--;
            for (int i = x; i < n - 1; i++){
                ds[i] = ds[i + 1];
            }
            n--;
            for (int i = 0; i < n; i++){
                ds[i].setDem(i + 1);
            }
            save(ds, n);
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 5:
            cout << "[5] Tim kiem SV:\n";
            cout << "\t[!] Nhap tu hoac cum tu lien quan trong ten: ";
            cin >> s;
            in_thuong(s);
            tim_kiem(ds, n, s);
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 6:
            int c;
            cout << "[6] Sap xep danh sach SV:\n";
            cout << "\t[?] Sap xep theo A - Z\t" << "Nhap [1]\n";
            cout << "\t[?] Sap xep theo tuoi (tu nho den lon)\t" << "Nhap [2]\n";
            cout << "\t[?] Sap xep theo diem (tu thap den cao)\t" << "Nhap [3]\n";
            cout << "\t[?] Sap xep lai nhu ban dau\t" << "Nhap [4]\n";
            cout << "\tNhap so: "; cin >> c;
            switch (c){
                case 1:
                    cout << "\t[!] Da sap xep theo A - Z\n";
                    sort(ds, ds+n, cmp1);
                    break;
                case 2:
                    cout << "\t[!] Da sap xep theo tuoi (tu nho den lon)\n";
                    sort(ds, ds+n, cmp2);
                    break;
                case 3:
                    cout << "\t[!] Da sap xep theo diem (tu thap den cao)\n";
                    sort(ds, ds+n, cmp3);
                    break;
                case 4: 
                    cout << "\t[!] Da sap xep lai nhu ban dau\n";
                    sort(ds, ds+n, cmp4);
                    break;
            }
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 7: 
            cout << "[7] Thuc hien sao luu:\n";
            c = 10;
            for(int i=1 ; i<=10 ; i++){
                cout << "[!] Dang sao luu " << c << "%\n";
                c+=10; 
            }
            save(ds,n);
            cout << "[?] Do you want to continue? [Y/N]: ";
            cin >> s;
            system("cls");
            break;
        case 8:
            cout << "[8] Thoat chuong trinh !!\n";
            cout << "Chuc ban mot ngay moi that bung nooooooo!!\n";
            system("pause");
            s = "N";
            system("cls");
            break;
        }
    }
    return 0;
}