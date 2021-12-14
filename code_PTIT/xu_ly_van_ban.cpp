#include <bits/stdc++.h>
using namespace std;
string chuan_hoa(string s)
{
    for(int i=0 ; i<s.size() ; i++)
    {
        s[i]=tolower(s[i]);
    }
    s[0]=toupper(s[0]);
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='.'||s[i]=='?'||s[i]=='!')
        {
            while(s[i+1]==' ')
                i++;
            i++;
            s[i]=toupper(s[i]);
        }
    }
    stringstream ss(s);
    string tmp,a[100];
    string temp="";
    int k=0;
    while(ss>>tmp)
    {
        a[k++]=tmp;
    }
    for(int i=0 ; i<k ; i++)
    {
        if(i==0)
        {
            temp=temp+a[i];
        }
        else 
            temp=temp+" "+a[i];
    }
    return temp;
}
int main()
{
    string s;
    getline(cin,s);
    string a[100],tmp,tmp1,tmp2;
    stringstream ss(s);
    while(getline(ss,tmp,'?'))
    {
        stringstream p(tmp);
        while(getline(p,tmp1,'!'))
        {
            stringstream q(tmp1);
            while(getline(q,tmp2,'.'))
            {
                cout<<chuan_hoa(tmp2)<<endl;
            }
        }
    }
    
}