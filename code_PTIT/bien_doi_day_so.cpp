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
        int buoc=0;
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(a[i]==a[j])
            {
                i++;
                j--;
            }
            else if(a[i]>a[j])
            {
                j--;
                a[j]+=a[j+1];
                buoc++;
            }
            else
            {
                i++;
                a[i]+=a[i-1];
                buoc++;
            }
        }
        cout<<buoc<<endl;
    }
}
