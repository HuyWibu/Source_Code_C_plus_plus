#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[100005];
int G,L;
int GCD(int a, int b)
{
    while(b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}
void Xuly()
{
    int d=0;    // bien d la so phan tu cua mang a
    for(int i=sqrt(G) ; i<=sqrt(L) ; i++)
    {   
        if(L%i==0)
        {
            a[d++]=i;
            if(i!=(L/i))
            {
                a[d++]=L/i;
            }
        }
    }
    int dem=0; // bien dem de dem so truong hop thoa man
    for(int i=0 ; i<d-1 ; i++)
    {
        for(int j=i+1 ; j<d ; j++)  // neu thoa man dk nay dem+2 do 2 ptu doi cho duoc cho nhau
        {
            int x=GCD(a[i],a[j]);
            if(x == G && (a[i]*a[j]/x == L))
                dem+=2;
        }
    }
    cout<<dem<<endl;
}
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        cin>>G>>L;
        Xuly();
    }
    return 0;
}