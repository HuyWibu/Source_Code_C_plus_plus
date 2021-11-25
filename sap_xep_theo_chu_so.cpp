#include <bits/stdc++.h>
using namespace std;
string s[10000];
bool check(string a, string b)
{
    if (a + b > b + a)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n, check);
        for (int i = 0; i < n; i++)
            cout << s[i];
        cout << endl;
    }
}