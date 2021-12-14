#include <bits/stdc++.h>
using namespace std;
const long long int mod=1000000000+7;
int a[1005];
int main()
{
    for(int i=0 ; i<=1000 ; i++)
    {
        if(i==1 || i==2)
            a[i]=1;
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
        a[i]%=mod;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}