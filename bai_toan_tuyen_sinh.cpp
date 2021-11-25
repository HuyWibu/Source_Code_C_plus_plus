#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	string full_name;
	scanf("\n");
	getline(cin, full_name);
	double x, y, z;
	cin >> x >> y >> z;
	double ans = x*2 + y + z;
	double sum = ans;
	if(s[2] == '1') sum += 0.5;
	if(s[2] == '2') sum += 1;
	if(s[2] == '3') sum += 2.5;
	cout << s << " " << full_name << " " ;
	if(s[2] == '1') cout << "0.5" << " ";
	if(s[2] == '2') cout << "1" << " ";
	if(s[2] == '3') cout << "2.5" << " ";
	cout << ans << " ";
	if(sum >= 24) 
        cout << "TRUNG TUYEN" << endl;
	else 
        cout << "TRUOT" << endl;
}