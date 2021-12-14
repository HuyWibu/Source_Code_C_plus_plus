#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt[256]={0};
    for(int i=0 ; i<s.size() ; i++)
        cnt[s[i]]++;
    int res=0;
    char kt;
    for(int i=0 ; i<256 ; i++)
    {
        if(cnt[i])
        {
            if(cnt[i]>=res)
            {
                res=cnt[i];
                kt=(char)i;
            }
        }
    }
    cout<<kt<<endl;
}