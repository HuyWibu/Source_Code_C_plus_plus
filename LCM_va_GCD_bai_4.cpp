// GCD(a, b) trong đó a, b là rất lớn
#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
ll GCD(ll a, ll b)  // tìm UCLN của 2 số a,b
{ 
    ll c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
} 
ll Chiadub(ll a, string  b)     // thực hiện phép chia dư của số nguyên lớn b cho a
{    
    ll mod = 0; //khoi tao mod la 0
    for (int i=0 ; i<b.length() ; i++) 
        mod = (mod*10 + b[i] - '0')%a;   
    return mod; // trả về kết quả sau khi chia dư
} 
// tính UCLN của 2 số nguyên lớn
ll GDCmax(ll a, string b) 
{     
    ll kq = Chiadub(a, b); //
    return GCD(a, kq); 
} 
int main() { 
    ll a; 
    int t; 
    string  b; 
    cin>>t;
    while (t--){
    	cin>>a; 
        cin>>b;
    	cout << GDCmax(a, b)<<endl;	
	}     
} 