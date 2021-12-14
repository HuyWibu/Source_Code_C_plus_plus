#include <iostream>
#include <cmath>
using namespace std;
// Ham tim tat ca cac uoc cua n trong doan tu 1 den can n
void finduoc(int n)
{
    int sum=n+1;
    for(int i=2 ; i<sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i!=(n/i))
            {
                sum+=n/i;
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        finduoc(n);
    }
    return 0;
}