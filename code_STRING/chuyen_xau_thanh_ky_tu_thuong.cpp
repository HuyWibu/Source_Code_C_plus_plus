#include <bits/stdc++.h>
using namespace std;
int main()
{
    string  s;
    getline(cin,s);
    for(int i=0 ; i<s.size() ; i++)
    {
        s[i]=tolower(s[i]);
    }
    for(char x:s)
        cout<<x;
    
} 