#include <bits/stdc++.h>
using namespace std;
// toan tu +
// substr
// stringstream
// stoi && to_string
// insert
int main()
{
    string s="2/2/2000"; // 2/2/2000 ----> 02/2/2000 ------>02/02/2000
    for(int i=0 ; i<s.length() ; i++)
    {
        if(i==1 && s[i]=='/')
        {
            s="0"+s;
        }
        if(i==4 && s[i]=='/')
        {
            s.insert(3,"0");
        }
    }
    cout<<s;
}