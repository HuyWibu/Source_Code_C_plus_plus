#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	scanf("\n");
	while(t--){
		int x=0;
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		while(ss >> token){
			x += token.size();
			if(x>100) break;
			cout << token << " ";
			x += 1;
		}
		cout << "\n";
	}
}
// 2
// Can cu Ke hoach giang day – hoc tap hoc ky 1 nam hoc 2021 – 2022 Can cu ket qua thi hoc ky 2 va hoc ky phu ky he nam hoc 2020 – 2021
// Hoc vien Cong nghe Buu chinh Vien thong to chuc khai giang truc tuyen