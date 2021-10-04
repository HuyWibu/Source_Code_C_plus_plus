#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if(s[s.length()-2]=='.' || s[s.length()-2]=='!' || s[s.length()-2]=='?')
        return true;
    return false;
}

int main()
{
    string s,a[205],tmp,xuly[205],temp;
    getline(cin,s);
    int x=0;

    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i]!=' ')
        {
            tmp+=a[i];
        }
        else
        {
            if(tmp!="")
            {
                a[x++]=tmp;
                tmp="";
            }
        }
    }
    if(tmp!="")
    {
        a[x++]=tmp;
    }
    temp=a[0];
    int dong=0;

    for(int i=1 ; i<x ; i++)
    {
        if(check(a[i])==0)
        {
            temp+=" "+a[i];
        }
        else
        {
            temp+=" "+a[i];
            xuly[dong++]=temp;
            temp="";
        }
    }
    if(temp!="")
    {
        xuly[dong++]=temp;
    }
    for(int i=0 ; i<dong ; i++)
    {
        cout<<xuly[i]<<endl;
    }
}