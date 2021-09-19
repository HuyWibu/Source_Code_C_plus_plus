// Tim BSCNN va USCLN 
#include <iostream>  
using namespace std; 
//tinh GCD(a, b) 
typedef long long ll;
ll GCD(ll a, ll b){ 
	while(b!=0) {
		ll r = a%b;
		a = b; b = r;
	}
	return a;
}    
//tinh GCD(a, b) theo cách khác 
// long long GCD1(long long a, long long b){ 
//     if (a == 0) 
//         return b;  
//     return GCD(b % a, a);  
// }    
// tinh LCM(a,b) 
ll LCM(ll a, ll b){  
	ll n = a*b;
	ll  m = GCD(a,b);
    return n/ m;    
}  
// Test result  
int main() {  
    int t; 
	cin>>t;
    while(t--){
		ll a,b;
    	cin>>a>>b;    	
    	cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
	}
}  
