#include<iostream>
using namespace std;
int a[100][100];
void check(int a[][100],int n)
{
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(a[0][i]==a[0][j])
			{
				a[0][j]=-1;
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin >> a[i][j];
			}
		}
		check(a,n);
		int dem=0, x=0;
		for(int k=0; k<n; k++) {
			int b=a[x][k];
			int d1=0;
			for(int i=1; i<n; i++) {
				int d=0;
				for(int j=0; j<n; j++) {
					if(a[i][j] == b) d++;
				}
				if(d>0) d1++;
			}
			if(d1==n-1) dem++;
			x++;		
		}
		cout << dem << endl;
	}
	return 0;
}