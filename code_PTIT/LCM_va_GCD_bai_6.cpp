// chia 1, 2,.., N thanh hai tap
//so cho hieu cua tong hai tap la M
// hai tong la co-prime   
#include <bits/stdc++.h> 
using namespace std; 
bool checkGCD(int a, int b)
{
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    if(a==1) return true;
    else return false;
}
bool Test(int n, int m) 
{ 
    // tinh tong tu 1 den n     
    int Sum = (n * (n + 1)) / 2; 
    //tinh tong tap thu nhat
    int sum_s1 = (Sum + m) / 2;   
    // tinh tong tap thu 2     
    int sum_s2 = Sum - sum_s1; 
    if (Sum < m) 
        return false; 
    if (sum_s1 + sum_s2 == Sum && sum_s1 - sum_s2 == m) //neu dieu nay xay ra
    {
        if(checkGCD(sum_s1,sum_s2))
            return true;
    }
    return false; 
} 
// Driver code 
int main() 
{ 
	int t;
    cin>>t;
	while(t--){
        int n,m;
		cin>>n>>m;
		if(Test(n,m)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}