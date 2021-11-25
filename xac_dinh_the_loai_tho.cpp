#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int dem=0, cnt=0;
	vector<int> s;
	vector<int> v;
	scanf("\n");
	for(int i=0 ; i<n ; i++){
		dem=0;
		string x;
		getline(cin, x);
		stringstream ss(x);
		string token;
		while(ss >> token){
			dem++;
		}
		s.push_back(dem);
	}
	bool check = true;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i] != 7){
			while(s[i+1] != 7){
				i++;
				if(i == s.size() - 1){
					cnt ++;
					v.push_back(1);
					check = false;
					break;
				}
			}
			if(check == false){
				break;
			}
			v.push_back(1);
			cnt++;
		}
		if(s[i] == 7){
			int count = 0;
			while(s[i+1] == 7){
				i++;
				count++;
				if(count == 4){
					break;
				}
			}
			v.push_back(2);
			cnt++;
		}
	}
	cout << cnt << endl;
	for(int i=0 ; i<v.size() ; i++){
		cout << v[i] << endl;
	}
}
// 16
// Minh ve minh co nho ta
// Muoi lam nam ay thiet tha man nong
// Minh ve minh co nho khong
// Nhin cay nho nui nhin song nho nguon
// Mot canh hai canh lai ba canh
// Tran troc ban khoan giac chang lanh
// Canh bon canh nam vua chop mat
// Sao vang nam canh mong hon bay
// Mot canh hai canh lai ba canh
// Tran troc ban khoan giac chang lanh
// Canh bon canh nam vua chop mat
// Sao vang nam canh mong hon bay
// Minh ve minh co nho ta
// Muoi lam nam ay thiet tha man nong
// Minh ve minh co nho khong
// Nhin cay nho nui nhin song nho nguon