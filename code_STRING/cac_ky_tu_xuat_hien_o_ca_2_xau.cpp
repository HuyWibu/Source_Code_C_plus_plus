#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int cnt[256]={0};
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0 ; i<s1.size() ; i++)
        cnt[s1[i]]=1;
    for(int i=0 ; i<s2.size() ; i++)
    {
        if(cnt[s2[i]])
        {
            cnt[s2[i]]=2;
        }
    }
    for(int i=0 ; i<256 ; i++)
    {
        if(cnt[i]==2)
            cout<<(char)i;
    }
}