#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0 ; i<s.size()-1 ; i++)
        {
            for(int j=i+1 ; j<s.size() ; j++)
            {
                if(s[i]>s[j])
                {
                    swap(s[i],s[j]);
                }
            }
        }
        for(char x:s)
            cout<<x;
        cout<<endl;
    }
}