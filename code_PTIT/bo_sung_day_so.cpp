#include<bits/stdc++.h>
using namespace std;
main(){
    int n; cin >> n;
    int a[10005]={0}, b[10005];
    bool check = true;
    for(int i=0 ; i<n ; i++){
    	cin >> b[i];
    	a[b[i]]++;
	}
	for(int i=1 ; i<=b[n-1] ; i++){
		if(a[i] == 0){
			cout << i << endl;
			check = false; 
		}
	}
    if(check) cout << "Excellent!";
}

// 4
// 1 2 3 5

// 7
// 4 5 7 8 9
// 10 11

// 5
// 1 2 3
// 4
// 5