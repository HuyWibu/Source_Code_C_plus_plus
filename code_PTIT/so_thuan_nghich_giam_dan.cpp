#include <bits/stdc++.h>
using namespace std;
struct cap
{
    string key;
    int value;
};
bool cmp(cap a, cap b)
{
    if (a.key.size() == b.key.size())
    {
        return a.key > b.key;
    }
    return a.key.size() > b.key.size();
}
bool check(string s)
{
    if (s.size() == 1)
        return false;
    else
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
}
int main()
{
    map<string, int> mp;
    string s;
    while (cin>>s)
    {
        if (check(s))
        {
            mp[s]++;
        }
    }
    int i = 0;
    cap pair[100];
    for (auto it : mp)
    {
        pair[i].key = it.first;
        pair[i].value = it.second;
        i++;
    }
    sort(pair, pair + i, cmp);
    for (int j = 0; j < i; j++)
    {
        cout << pair[j].key << " " << pair[j].value << endl;
    }
}