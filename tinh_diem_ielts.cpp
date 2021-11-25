#include<bits/stdc++.h>
using namespace std;
float a[40];
void diem(){
	a[3]=2.5;
	a[4]=2.5;
	a[5]=3;
	a[6]=3;
	a[7]=3.5;
	a[8]=3.5;
	a[9]=3.5;
	a[10]=4;
	a[11]=4;
	a[12]=4;
	a[13]=4.5;
	a[14]=4.5;
	a[15]=4.5;
	a[16]=5;
	a[17]=5;
	a[18]=5;
	a[19]=5;
	a[20]=5.5;
	a[21]=5.5;
	a[22]=5.5;
	a[23]=6;
	a[24]=6;
	a[25]=6;
	a[26]=6;
	a[27]=6.5;
	a[28]=6.5;
	a[29]=6.5;
	a[30]=7;
	a[31]=7;
	a[32]=7;
	a[33]=7.5;
	a[34]=7.5;
	a[35]=8;
	a[36]=8;
	a[37]=8.5;
	a[38]=8.5;
	a[39]=9;
	a[40]=9;
}

int main(){
	diem();
	int t; cin >>t;
	while(t--){
		int x, y; cin >> x >> y;
		double m,n,ans;
		cin >> m >> n;
		ans = m + n;
		ans += a[x] + a[y];
		ans /= 4;
		y = ans;
		ans *= 100;
		x = ans;
		x %= 100;
		ans /= 100;
		if(x >= 25 && x < 75){
			ans = y + 0.5;
			cout <<fixed << setprecision(1) << ans <<endl;
			continue;
		}
		if(x >= 75){
			ans = y + 1;
			cout <<fixed << setprecision(1) << ans <<endl;
			continue;
		}
		if(x < 25){
			ans = y + 0.0;
			cout <<fixed << setprecision(1) << ans <<endl;
			continue;
		}
		cout <<fixed << setprecision(1) << ans <<endl;
	}
    return 0;
}
// 2
// 15 25 5.0 5.5
// 22 32 6.0 6.0