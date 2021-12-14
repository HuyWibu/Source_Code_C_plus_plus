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
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        int max=0;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=n-1 ; j>=i+max+1 ; j--)
            {
                if(a[j]>a[i] && max<j-i)
                {
                    max=j-i;
                    break;
                }
            }
        }
        cout<<max<<endl;
    }
} 

