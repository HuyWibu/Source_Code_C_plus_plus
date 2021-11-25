#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin >> t;
	scanf("\n");
	while (t--){
		string s;
		getline(cin, s);
		if (s[0] == '0'){
			for (int i = 0; i < s.size(); i++){
				if (s[i] >= '0' && s[i] <= '9'){
					cout << s[i];
				}
			}
		}
		else{
			string ans = "";
			int dem = 0;
            int x = s.size() - 1;
			for(int i = x ; i>=0 ; i--){
                if(dem == 9){
					 break;
				}
				if (s[i] >= '0' && s[i] <= '9'){
					ans = s[i] + ans;
				    dem++;
				}
			}
			cout << "0" << ans;
		}
		cout << endl;
	}
}
// 3
// 0946 940 087
// 0946-940-087
// 0946.940.087