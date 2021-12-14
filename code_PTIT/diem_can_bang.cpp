#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2];
        int sum=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int left=0;
        bool check=false;
        for(int i=0 ; i<n ; i++)
        {
            left+=a[i];
            if(left==(sum-left-a[i+1]))
            {
                cout<<i+2<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"-1"<<endl;
        }
    }
}