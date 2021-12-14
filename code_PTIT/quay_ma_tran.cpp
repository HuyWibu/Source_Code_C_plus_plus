#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[100][100]={0};
        int b[100][100]={0};
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0 ; i<m/2 ; i++)
        {
            for(int j=i+1 ; j<m-i ; j++)
                b[i][j]=a[i][j-1];
            for(int j=i+1 ; j<n-i ; j++)
                b[j][m-i-1]=a[j-1][m-i-1];
            for(int j=m-i-2 ; j>=i ; j--)
                b[n-i-1][j]=a[n-i-1][j+1];
            for(int j=n-i-2 ; j>=i ; j--)
                b[j][i]=a[j+1][i];
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(b[i][j]==0)
                {
                    b[i][j]=a[i][j];
                }
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}