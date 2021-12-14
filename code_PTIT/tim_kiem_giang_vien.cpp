#include <bits/stdc++.h>
using namespace std;

class GiangVien{
    private:
        string ma, ten, mon;
        static int dem;
    public:
        friend istream& operator >> (istream&, GiangVien&);
        friend ostream& operator << (ostream&, GiangVien);
        void bo_mon();
        string getName();
};

int GiangVien::dem=0;

istream& operator >> (istream& in, GiangVien& a){
    a.dem++;
    a.ma = "GV" + string(2-to_string(a.dem).length(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    scanf("\n");
    getline(in, a.mon);
    return in;
}

ostream& operator << (ostream& out, GiangVien a){
    a.bo_mon();
    out << a.ma << " " << a.ten << " " << a.mon << endl;
    return out;
}

void GiangVien::bo_mon(){
    string s = this->mon;
    stringstream ss(s);
    string token, res="";
    while(ss >> token){
        res += toupper(token[0]);
    }
    this->mon = res;
}

string GiangVien::getName(){
    return this->ten;
}

bool tim_kiem(string name, string x){
    for(int i=0 ; i<name.size() ; i++){
        name[i] = tolower(name[i]);
    }
    for(int i=0 ; i<x.size() ; i++){
        x[i] = tolower(x[i]);
    }
    return name.find(x) != string::npos;
}

int main(){
    int n; cin >> n;
    GiangVien ds[100];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    int Q; cin >> Q;
    while(Q--){
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(int i=0 ; i<n ; i++){
            if(tim_kiem(ds[i].getName(), s)){
                cout << ds[i];
            }
        }
    }
    return 0;
}


// 3
// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin
// 1
// aN