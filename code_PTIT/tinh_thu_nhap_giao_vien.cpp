#include <bits/stdc++.h>
using namespace std;

struct GiaoVien{
 	string ma,ten;
 	int luong_co_ban;
	void nhap(){
  	getline(cin, ma);
  	getline(cin, ten);
    cin >> luong_co_ban; 
}
	void  in(){
	cout << ma << " " << ten << " ";
	int k = stoi(ma.substr(2, 2));
	cout << k << " ";
	string e = ma.substr(0, 2);
	if(e == "HT")
		cout << "2000000" <<" " << luong_co_ban*k+2000000;
	if(e == "HP")
		cout << "900000" << " " << luong_co_ban*k+900000;
	if(e=="GV")
		cout << "500000" << " " << luong_co_ban*k+500000;
}
};

int main(){
    struct GiaoVien a;
    a.nhap();
    a.in();
    return 0;
}

// HP04
// Tran Quoc Huy
// 1578000