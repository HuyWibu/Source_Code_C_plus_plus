#include <bits/stdc++.h>
using namespace std;
int ktraNT(int n)
{
    if(n<2) return 0;
    else
    {
        for(int i=2 ; i<=sqrt(n) ; i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int t;
    cin>>t;  
    int s=0;  
    while(t--)
    {
        int n;
        cin>>n;
        if(ktraNT(n))
        {
            s+=n;
        }
        else
        {
            int i=2;
            while(n!=1)
            {
                while(n%i==0)
                {
                    s+=i;
                    n/=i;
                }
                i++;
            }
        }
    }
    cout<<s<<endl;
}