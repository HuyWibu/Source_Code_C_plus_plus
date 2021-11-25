#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
        int dem=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            map<char,int> m;
            for(int j=i ; j<s.size() ; j++)
            {
                m[s[j]]++;
                if(m.size()==k)
                    dem++;
                if(m.size()>k)
                    break;
            }
        }
        cout<<dem<<endl;
    }
}