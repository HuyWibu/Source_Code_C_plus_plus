#include <bits/stdc++.h>
using namespace std;

class GiaoVien{
    private:
        string ten, ma, mon;
        static int dem;
    public:
        friend istream& operator >> (istream&, GiaoVien&);
        friend ostream& operator << (ostream&, GiaoVien);
        void bo_mon();
        string getMon();
};

void GiaoVien::bo_mon(){
    string x = this->mon;
    string token;
    string res="";
    stringstream ss(x);
    while(ss >> token){
        res += toupper(token[0]);
    }
    this->mon = res;
}

string GiaoVien::getMon(){
    return this->mon;
}

int GiaoVien::dem=0;

istream& operator >> (istream& in, GiaoVien& a){
    a.dem++; 
    a.ma = "GV" + string(2-to_string(a.dem).length(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    getline(in, a.mon);
    a.bo_mon();
    return in;
}

ostream& operator << (ostream& out, GiaoVien a){
    out << a.ma << " " << a.ten << " " << a.mon << endl;
    return out;
}

void viet_tat(string& a){
    string token;
    string res="";
    stringstream ss(a);
    while(ss >> token){
        res += toupper(token[0]);
    }
    a = res;
}

int main(){
    int n; cin >> n;
    GiaoVien ds[100];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    int Q; cin >> Q;
    while(Q--){
        string bm;
        scanf("\n");
        getline(cin, bm);
        viet_tat(bm);
        cout << "DANH SACH GIANG VIEN BO MON " << bm << ":" << endl;
        for(int i=0 ; i<n ; i++){
            if(ds[i].getMon() == bm){
                cout << ds[i];
            }
        }
    }
    return 0;
}