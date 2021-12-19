#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    string s; cin >> s;
    for(int i=0 ; i<s.size() ; i++)
    {
        ans = ans * 10 + (s[i] - '0');
    }
    cout << ans + 1 << endl;
    return 0;
}