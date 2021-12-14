#include <bits/stdc++.h>
using namespace std;
void Xu_Ly(string &s)
{
    int vi_tri = -1, k = -1, tang = -1;
    char max = -1;
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] > s[i + 1])
            k = i, tang = 1;
    for (int i = k + 1; i < s.size(); i++)
    {
        if (s[i] < s[k] && max < s[i])
            max = s[i], vi_tri = i;
    }
    if (tang == -1)
        cout << "-1\n";
    else
    {
        swap(s[k], s[vi_tri]);
        cout << s << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Xu_Ly(s);
    }
    return 0;
}