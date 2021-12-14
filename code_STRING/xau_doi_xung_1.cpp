#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.size();
    bool check=true;
    for(int i=0 ; i<x ; i++)
    {
        if(s[i]!=s[x-i-1])
        {
            check=false;
            break;
        }
    }
    if(check)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}