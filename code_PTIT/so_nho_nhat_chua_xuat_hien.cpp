#include<iostream> 
using namespace std; 
int a[1000005];
int main()
{ 
	int t; 
	cin>>t; 
	while(t--)
	{ 
		int n; 
		cin>>n; 
		for(int i=0 ; i<n ; i++)
		{ 
			cin>>a[i]; 
		} 
		int k=1; 
		while(1)
		{ 
			int d=1; 
			for(int i=0 ; i<n ; i++)
			{ 
				if(a[i]==k)
				{ 	d=0; 
					break; 
				} 
			} 
			if(d==1)
			{ 
				cout<<k; 
				break; 
			} 
			else
			{ 
				k++; 
			} 
		} 
		cout<<endl; 
	} 
	return 0; 
}