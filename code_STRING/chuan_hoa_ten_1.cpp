#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s,tmp;
        getline(cin,s);
        for(int i=0 ; i<s.size() ; i++)
            s[i]=tolower(s[i]);
        stringstream ss(s);
        while(ss>>tmp)
        {
            tmp[0]=toupper(tmp[0]);
            cout<<tmp<<" ";
        }
        cout<<endl;
    }
}