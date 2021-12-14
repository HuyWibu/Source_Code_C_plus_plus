#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100][100]={0};
        vector<int> v;
        int n,m;
        cin>>n>>m;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                cin>>a[i][j];
            }
        }
        int x=0, y=0, row=n-1, col=m-1;
        while(v.size()<m*n)
        {
            for(int i=x ; i<=col ; i++)
                v.push_back(a[y][i]);
            for(int i=x+1 ; i<=row ; i++)
                v.push_back(a[i][col]);
            for(int i=col-1 ; i>=x ; i--)
                v.push_back(a[row][i]);
            for(int i=row-1 ; i>y ; i--)
                v.push_back(a[i][x]);
            x++; y++; col--; row--;
        }
        for(int i=m*n-1 ; i>=0 ; i--)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}