#include <bits/stdc++.h>
using namespace std;
int cmp(string a, string b)
{
    return a<b;
}
int main()
{
    string s,tmp,a[100];
    getline(cin,s);
    for(int i=0 ; i<s.size() ; i++)
        s[i]=tolower(s[i]);
    stringstream ss(s);
    int n=0;
    while(ss>>tmp)
    {
        a[n++]=tmp;
    }
    int b[n]={0};   // dem so lan xuat hien cua tu do trong xau
    int c[n]={0};   // danh dau de ko bi trung
    int max=0;  // so lan xuat hien nhieu nhat cua 1 tu trong xau
    for(int i=0 ; i<n ; i++)
        b[i]=1;
    sort(a,a+n,cmp);
    for(int i=0 ; i<n ; i++)
    {
        if(c[i]==0)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(a[i]==a[j])
                {
                    b[i]++;
                    c[j]=1;
                }
            }
            if(max<b[i])  max=b[i];
        }
    } 
    string temp;    // temp de luu tu co lan xuat hien nhieu nhat trong xau va co thu tu tu dien nho nhat
    for(int i=0 ; i<n ; i++)    // tim tu co so lan xuat hien bang max dau tien
    {
        if(b[i]==max)
        {
            cout<<a[i]<<" "<<max<<endl;
            break;
        }

    }
// ----> sau nay se dung map de do met hon voi nhung bai nhu nay!~~
}