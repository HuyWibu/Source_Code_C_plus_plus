#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        char res;
        int fre = 0;
        for (auto it : mp)
        {
            if (it.second > fre)
            {
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << " " << fre << endl;
    }
}