#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("VANBAN.in" , "r", stdin);
    string tmp;
    
    map<string, bool> mp;
    while(cin >> tmp)
    {
        for(int i=0 ; i<tmp.size() ; i++)
        {
            tmp[i] = tolower(tmp[i]);
        }
        mp[tmp] = true;
    }
    for(auto it : mp)
    {
        cout << it.first << endl;
    }
}