#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[105],b[105];  
    int n;  // nhap vao n la so phan tu cua manh
    cin>>n; 
    for(int i=0 ; i<n ; i++)    // vi du mang a: 1 -5 6 -7 8 -9
        cin>>a[i];
    sort(a,a+n);    // sap xep cac ptu trong mang a tang dan
    // sau khi sort mang a la: -9 -7 -5 1 6 8
    // khoi tao gia tri cho mang b
    int duong=0;
    int am=n-1;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>=0)
        {
            b[duong++]=a[i];   
        }
        else
        {
            b[am--]=a[i];
        }
    }
    for(int i=0 ; i<n ; i++)
        cout<<b[i]<<" ";
}
