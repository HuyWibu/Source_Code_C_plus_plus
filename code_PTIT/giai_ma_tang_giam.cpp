#include <bits/stdc++.h>
using namespace std;
void giai_ma(string s)
{
    int min_co_san = 3; // vi 2 vi tri dau la 1 2 nen min lon hon 2 la 3
    int pos;            // theo doi vi tri cua chu I ben trai gan nhat
    vector<int> v;
    if (s[0] == 'I')
    {
        v.push_back(1);
        v.push_back(2);
        pos = 1; // pos= i+1 chinh la 0+1 = 1
    }
    else
    {
        v.push_back(2);
        v.push_back(1);
        pos = 0; // chua xuat I nen pos = 0
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            v.push_back(min_co_san);
            min_co_san++;
            pos = i + 1;
        }
        else
        {
            v.push_back(v[i]);                  // noi phan tu phia trc trong vector vao vector dau ra
            for (int j = pos; j <= i; j++)      // tang nhung ptu o giua I va D len 1 de D o cuoi la nho nhat
            v[j]++;                             // vi du:2 1 3 3 ----> 2 1 4 3
            min_co_san++;
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        giai_ma(s);
    }
}