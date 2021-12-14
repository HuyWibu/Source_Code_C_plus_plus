#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int chu_cai=0, so=0, ky_tu=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(isalpha(s[i]))
            chu_cai++;
        else if(isdigit(s[i]))
            ky_tu++;
        else    
            so++;
    }
    cout<<chu_cai<<" "<<so<<" "<<ky_tu<<endl; 
}