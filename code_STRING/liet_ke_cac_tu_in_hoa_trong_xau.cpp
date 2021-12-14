#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,tmp;
    getline(cin,s1);
    stringstream ss(s1);
    while(ss>>tmp)
    {
        bool check=true;
        for(int i=0 ; i<tmp.size() ; i++)
        {
            if(isupper(tmp[i])==0)
            {
                check=false;
                break;
            }
        }
        if(check==true)
            cout<<tmp<<" ";
    }
}