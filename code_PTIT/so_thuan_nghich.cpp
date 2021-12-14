#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
    {
		long long m,n;
	    long long so_dao=0;
	    cin>>n;
	    m=n;
	    while (n>0)
        {
		int k=n%10;
		so_dao=so_dao*10+k;
		n/=10;
	    }
	if (m==so_dao) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
}