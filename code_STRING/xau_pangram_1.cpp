#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int b[26]={0};
    bool check=true;
    for(int i=0 ; i<s.size() ; i++)
    {
        b[s[i]-'a']=1;
    }
    for(int i=0 ; i<26 ; i++)
    {
        if(b[i]==0)
        {
            check=false;
            break;
        }
    }
    if(check==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}