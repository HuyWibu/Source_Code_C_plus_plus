#include<bits/stdc++.h>
using namespace std;
int don_gia[55];

struct xe{
	int x;
	string hd,ngay;
};

int main(){
    don_gia[5]=10000;
    don_gia[7]=15000;
    don_gia[2]=20000;
    don_gia[29]=50000;
    don_gia[45]=70000;

	int n; cin >> n;
    long long sum=0;
	string s;
	xe ds[n];
	for(int i=0 ; i<n ; i++){
		scanf("\n");
        string token;
		getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		while(ss >> token){
			v.push_back(token);
		}
		ds[i].x = stoi(v[2]);
		ds[i].hd=v[3];
		ds[i].ngay=v[4];
		v.clear();
	}
	for(int i=0 ; i<n ; i++){
		if(ds[i].hd == "IN"){
			sum += don_gia[ds[i].x];
		}
		if(ds[i].ngay != ds[i+1].ngay){
			cout << ds[i].ngay << ": "<< sum << endl;
			sum=0;
		}
	}
}
// 5
// 30F-123.15 Xe_con 5 OUT 06/11/2021
// 30F-123.15 Xe_con 5 IN 06/11/2021
// 30H-123.15 Xe_con 7 IN 06/11/2021
// 29H-222.68 Xe_tai 2 IN 07/11/2021
// 30G-511.15 Xe_con 5 IN 07/11/2021