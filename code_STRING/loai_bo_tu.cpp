#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,tmp,a[100];
    getline(cin,s1);
    getline(cin,s2);
    stringstream ss(s1);
    int n=0;
    while(ss>>tmp)
    {
        a[n]=tmp;
        n++;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==s2)
            a[i]="*";
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]!="*")
        cout<<a[i]<<" ";
    }
}