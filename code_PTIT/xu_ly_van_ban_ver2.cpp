#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string tmp = "";
    vector<string> v;
    while (cin >> a)
    {
        tmp += a;
        tmp += " ";
        char c = a[a.size() - 1];
        if (c == '!' || c == '?' || c == '.')
        {
            tmp.pop_back(); // xoa dau cach
            v.push_back(tmp);
            tmp = "";
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i].pop_back(); // xoa 3 dau
        for (int j = 0; j < v[i].size(); j++)
        {
            if (j == 0)
            {
                v[i][j] = toupper(v[i][j]);
            }
            else
                v[i][j] = tolower(v[i][j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}