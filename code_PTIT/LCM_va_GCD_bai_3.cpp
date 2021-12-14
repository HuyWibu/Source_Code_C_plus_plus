#include <bits/stdc++.h>
typedef long long ll;
const long long int MAX=1000000007; 
using namespace std;
// Tìm h(x) là tích các số trong mảng a[]
ll tich(int a[], int n)
{
    ll h=1;
    for(int i=0 ; i<n ; i++)
    {
        h=((h%MAX)*(a[i]%MAX))%MAX;     // do module 10^9+7 với tích là: (a*b) mod c= ((a mod c)*(b mod c)) mod c 
    }
    return h;
}
// Tìm Ước chung lớn nhất của 2 số a,b
int GCD(int a, int b)
{
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
// Tìm g(x) là Ước chung lớn nhất của tất cả các phần tử trong mảng a[]
int GCDA(int a[], int n)
{
    int x=a[0];
    for(int i=1 ; i<n ; i++)
    {
        x=GCD(a[i],x);
    }
    return x;
}

// Hàm lũy thừa là h(x) mũ g(x)
ll luythua(int a[], int n)
{
    ll kq=tich(a,n);
    int k=GCDA(a,n);
    for(int i=1 ; i<k ; i++)
    {
        kq=(kq*kq)%MAX;
    }
    return kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[105];
        int n;
        cin>>n;
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        cout<<luythua(a,n)<<endl;
    }
    return 0;
}