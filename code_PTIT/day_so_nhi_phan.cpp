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
        bool a[n+1], b[n+1];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<n ; i++)
            cin>>b[i];
        int max_length=0;
        int i=0;
        while(i<n)
        {
            int sum_a=0, sum_b=0;
            for(int j=i ; j<n ; j++)
            {
                sum_a+=a[j];
                sum_b+=b[j];
                if(sum_a==sum_b)
                {
                    int length=j-i+1;
                    if(max_length<length)
                        max_length=length;
                } 
            }
            i++;
        }
        cout<<max_length<<endl;
    }
}