#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		vector<int> v;
		vector<int> k;
		int n; cin >> n;
		int m; cin >> m;
		int max = -2000000000;
		for(int i=0 ; i<n ; i++){
			int x; cin >> x;
			if(x > max) max = x;
			if(x < 0) v.push_back(x);
			else k.push_back(x);
		}
		bool check = false;
		for(int i=0 ; i<v.size() ; i++){
			if(v[i] == max && check == false)
			{
				cout << m << " ";
				check = true;
			}
			cout << v[i] << " ";
		}
		check = false;
		for(int i=0 ; i<k.size() ; i++){
			if(k[i] == max && check == false){
				cout << m << " ";
				check = true;
			}
			cout << k[i] << " ";
		}
		cout << endl;
	}
}