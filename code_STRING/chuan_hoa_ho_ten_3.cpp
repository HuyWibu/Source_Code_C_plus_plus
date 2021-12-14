#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s,tmp,a[105];
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
        for(int i=0 ; i<a[n-1].size() ; i++)
        {
            a[n-1][i]=toupper(a[n-1][i]);
        }
        cout<<a[n-1]<<", ";
        for(int i=0 ; i<n-1 ; i++)
        {
            a[i][0]=toupper(a[i][0]);   
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
