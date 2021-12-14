#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string s, ans = "";
        getline(cin, s);
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (k < 100)
            {
                ans += s[i];
                k++;
            }
            else
                break;
        }
        cout << ans << endl;
    }
}