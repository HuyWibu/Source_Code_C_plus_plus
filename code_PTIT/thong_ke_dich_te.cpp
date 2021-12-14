#include<bits/stdc++.h>
using namespace std;

void nhiem(int A[][100], int ans, int a, int b, int m, int n){
	if(a>0 && b>0){
		if(A[a-1][b-1] != -1){
			ans += A[a-1][b-1];
			A[a-1][b-1] = 0;
		}
	}
	if(b>0){
		if(A[a][b-1] != -1){
			ans += A[a][b-1];
			A[a][b-1] = 0;
		}
	}
	if(a<m-1 && b>0){
		if(A[a+1][b-1] != -1){
			ans += A[a+1][b-1];
			A[a+1][b-1] = 0;
		}
	}
	if(a<m-1){
		if(A[a+1][b] != -1){
			ans += A[a+1][b];
			A[a+1][b] = 0;
		}
	}
	if(a<m-1 && b<n-1){
		if(A[a+1][b+1] != -1){
			ans += A[a+1][b+1];
			A[a+1][b+1] = 0;
		}
	}
	if(b<n-1){
		if(A[a][b+1] != -1){
			ans += A[a][b+1];
			A[a][b+1] = 0;
		}
	}
	if(a>0 && b<n-1){
		if(A[a-1][b+1] != -1){
			ans += A[a-1][b+1];
			A[a-1][b+1] = 0;
		}
	}
	if(a>0){
		if(A[a-1][b] != -1){
			ans += A[a-1][b];
			A[a-1][b] = 0;
		}
	}
}

int main(){
	int A[100][100], ans=0, m, n;
	cin >> m >> n;
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			cin >> A[i][j];
		}
	}
	for(int i=0 ; i<m ; i++){
		for(int j=0 ;  j<n ; j++){
			if(A[i][j] == -1){
				nhiem(A, ans, i, j, m, n);
			}
		}
	}
	cout << ans << endl;
}
// 4 4
// 1 1 0 1
// 2 -1 4 5
// 0 0 0 0
// 1 0 2 1