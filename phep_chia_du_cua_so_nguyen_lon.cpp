#include<bits/stdc++.h> 
using namespace std; 
int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{ 
		string s; 
		long long b,m=0; 
		cin>>s>>b; 
		int a[1005]; 
		int x=s.size(); 
		for(int i=0 ; i<x ; i++)
		{ 
			a[i]=s[i]-'0'; 			
		} 	
		for(int i=0 ; i<x ; i++)
		{ 
			m=(m*10+a[i])%b; 
		} 
		cout<<m<<endl; 
	} 
}
