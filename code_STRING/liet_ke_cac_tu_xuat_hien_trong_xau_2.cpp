#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,tmp,a[100];
    getline(cin,s);
    stringstream ss(s);
    int n=0;
    while(ss>>tmp)
    {
        a[n]=tmp;
        n++;
    }
    int b[n]={0};
    for(int i=0 ; i<n ; i++)
    {
        if(b[i]==0)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(a[i]==a[j])
                    b[j]=1;
            }
            cout<<a[i]<<" ";
        }
    }
}