#include <bits/stdc++.h>
using namespace std;
struct vt
{
    int x;
    int y;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vt a[n+2];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i].x>>a[i].y;
        }
        a[n].x=a[0].x;
        a[n].y=a[0].y;
        int s1=0, s2=0;
        for(int i=0 ; i<n ; i++)
        {
            s1+=a[i].x*a[i+1].y;
            s2+=a[i].y*a[i+1].x;
        }
        cout<<fixed<<setprecision(3)<<(double)abs(s1-s2)/2<<endl;
    }

}