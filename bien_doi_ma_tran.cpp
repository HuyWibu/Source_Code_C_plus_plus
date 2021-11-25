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
        int a[n][n]={0};
        int sum_total=0, max=0, sum=0;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cin>>a[i][j];
                sum_total+=a[i][j];
            }
        }   
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }
            if (max < sum)
                max = sum;
        }
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[j][i];
            }
            if (max < sum)
                max = sum;
        }
        cout<<max*n-sum_total<<endl;
    }
}