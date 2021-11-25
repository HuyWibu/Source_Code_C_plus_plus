#include <bits/stdc++.h>
using namespace std;

class GiaoVien{
    private:
        string ten, ma, mon, name;
        static int dem;
    public:
        friend istream& operator >> (istream&, GiaoVien&);
        friend ostream& operator << (ostream&, GiaoVien);
        friend bool operator < (GiaoVien, GiaoVien);
        void bo_mon();
        void getName();
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

void GiaoVien::getName(){
    stringstream ss(this->ten);
    string a[100];
    int n=0;
    while(ss >> a[n]){
        n++;
    }
    this->name = a[n-1];
}

int GiaoVien::dem=0;

istream& operator >> (istream& in, GiaoVien& a){
    a.dem++; 
    a.ma = "GV" + string(2-to_string(a.dem).length(), '0') + to_string(a.dem);
    scanf("\n");
    getline(in, a.ten);
    getline(in, a.mon);
    a.getName();
    a.bo_mon();
    return in;
}

ostream& operator << (ostream& out, GiaoVien a){
    out << a.ma << " " << a.ten << " " << a.mon << endl;
    return out;
}

bool operator < (GiaoVien a, GiaoVien b){
    if(a.name == b.name){
        return a.ma < b.ma;
    }
    return a.name < b.name;
}

int main(){
    int n; cin >> n;
    GiaoVien ds[100];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    sort(ds, ds+n);
    for(int i=0 ; i<n ; i++){
        cout << ds[i];
    }
    return 0;
}