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
        a[n]=tmp;
        n++;
    }
    sort(a,a+n,cmp);
    int b[n]={0};
    for(int i=0 ; i<n ; i++)
    {
        int cnt=1;
        if(b[i]==0)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                    b[j]=1;
                }
            }
            cout<<a[i]<<" "<<cnt<<endl;
        }
    }
    
}