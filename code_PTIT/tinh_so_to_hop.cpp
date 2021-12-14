#include <bits/stdc++.h>
using namespace std;
const long long int mod=1000000000+7;
long long to_hop[1005][1005];
int main()
{
    for(int i=0 ; i<=1000 ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            if(j==0 || i==j) 
                to_hop[i][j]=1;
            else    
                to_hop[i][j]=to_hop[i-1][j-1]+to_hop[i-1][j];
            to_hop[i][j]%=mod;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<to_hop[n][k]<<endl;
    }
}