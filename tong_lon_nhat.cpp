#include <bits/stdc++.h>
using namespace std;
void input(int *x, int n, int &x_sau)
{
    for(int i=0 ; i<n ; i++)
    {
        cin>>x[i];
        x_sau+=x[i];
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum_max=0;
        cin>>n>>m;
        int size;
        if(n>m) 
            size=n;
        else    
            size=m;
        int a[size]={0}, b[size]={0};
        int a_truoc=0, b_truoc=0, a_sau=0, b_sau=0;
        // a_sau vs b_sau luc nay dang la tong cua n,m phan tu
        input(a, n, a_sau);
        input(b, m, b_sau);
        for(int i=0 ; i<size ; i++)
        {
            a_sau-=a[i];
            a_truoc+=a[i];
            b_sau-=b[i];
            b_truoc+=b[i];
            int max_truoc, max_sau;
            if(a_truoc>b_truoc) max_truoc=a_truoc;
            else    max_truoc=b_truoc;
            if(a_sau>b_sau) max_sau=a_sau;
            else    max_sau=b_sau;
            if(sum_max < max_truoc+max_sau)
                sum_max=max_truoc+max_sau;
        }
        cout<<sum_max<<endl;
    }
}