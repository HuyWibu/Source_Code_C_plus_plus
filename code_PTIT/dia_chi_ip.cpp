#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	scanf("\n");
	while (t--){
		string s; cin >> s;
		int x=0, dem=0;
        bool check = false;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                x = x*10 + (s[i] - 48);
            }
            else if(s[i] == '.'){
                if(x > 255){
                    check = true;
                    break;
                }
                x = 0;
                dem++;
            }
            else{
                check=true;
                break;
            }
        }
        if(x > 255)
            check = true;
        if(check == false && dem == 3)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}
// 2
// 192.168.1.1
// 256.255.255.255