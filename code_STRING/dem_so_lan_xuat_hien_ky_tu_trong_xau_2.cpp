#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt[26]={0};
    for(int i=0 ; i<s.size() ; i++)
    {
        cnt[s[i]-'a']++;
    }
    for(int i=0 ; i<s.size() ; i++)
    {
        if(cnt[s[i]-'a'])
        {
            cout<<s[i]<<" "<<cnt[s[i]-'a']<<endl;
            cnt[s[i]-'a']=0;
        }
    }
}