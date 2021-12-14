#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string ma, ten, lop, email;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        string getMa();
        string getLop();
};

istream& operator >> (istream& in, SinhVien& a){
    in >> a.ma;
    scanf("\n");
    getline(in, a.ten);
    in >> a.lop;
    in >> a.email;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}

string SinhVien::getMa(){
    return this->ma;
}

string SinhVien::getLop(){
    return this->lop;
}

int main(){
    int n; cin >> n;
    SinhVien ds[1000];
    for(int i=0 ; i<n ; i++){
        cin >> ds[i];
    }
    int Q; cin >> Q;
    while(Q--){
        scanf("\n");
        string nganh, res="";
        getline(cin, nganh);
        cout << "DANH SACH SINH VIEN NGANH ";
        for (int i = 0; i < nganh.size(); i++){
            res  += toupper(nganh[i]);
        }
        cout << res << ":" << endl;
        if(nganh == "Ke toan"){
            for(int i=0 ; i<n ; i++){
                if(ds[i].getMa().substr(3,4) == "DCKT"){
                    cout << ds[i];
                }
            }
        }
        else if(nganh == "Cong nghe thong tin"){
            for(int i=0 ; i<n ; i++){
                if(ds[i].getMa().substr(3,4) == "DCCN" && ds[i].getLop()[0] != 'E'){
                    cout << ds[i];
                }
            }
        }
        else if(nganh == "An toan thong tin"){
            for(int i=0 ; i<n ; i++){
                if(ds[i].getMa().substr(3,4) == "DCAT" && ds[i].getLop()[0] != 'E'){
                    cout << ds[i];
                }
            }
        }
        else if(nganh == "Vien thong"){
            for(int i=0 ; i<n ; i++){
                if(ds[i].getMa().substr(3,4) == "DCVT"){
                    cout << ds[i];
                }
            }
        }
        else{
            for(int i=0 ; i<n ; i++){
                if(ds[i].getMa().substr(3,4) == "DCDT"){
                cout << ds[i];
                }
            }
        }
    }
    return 0;
}