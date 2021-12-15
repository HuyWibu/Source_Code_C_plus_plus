#include <bits/stdc++.h>
using namespace std;

struct people
{
    string name, dem, ten, sdt, ngay;
};

string getDay(string s)
{
    string x;
    if (s.substr(0, 4) == "Ngay")
    {
        x = s.substr(5, 10);
    }
    return x;
}

string getTen(string s)
{
    stringstream ss(s);
    string x;
    while (ss >> x);
    return x;
}

string getDem(string s)
{
    string x = "";
    int i = s.size() - 1;
    while (s[i] != ' ')
        i--;
    string token = "";
    for (int j = i - 1; s[j] != ' '; j--)
    {
        token = token + s[j];
    }
    for (int i = 0; i < token.size(); i++)
    {
        x = token[i] + x;
    }
    return x;
}

int check(string s)
{
    if(s.substr(0, 4) == "Ngay")
        return 1;
    return 2;
}

bool cmp(people a, people b)
{
    if(a.ten == b.ten)
        return a.dem < b.dem;
    return a.ten < b.ten;
}

int main()
{
    freopen("SOTAY.txt", "r", stdin);
    freopen("DIENTHOAI.txt", "w", stdout);
    string s;
    vector<people> v;
    string day;
    while (getline(cin, s))
    {
        if(check(s) == 1)
        {   
            day = getDay(s);
        }
        else
        {
            people x;
            x.ngay = day;
            x.name = s;
            x.dem = getDem(s);
            x.ten = getTen(s);
            string token;
            getline(cin, token);
            x.sdt = token;
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i].name << ": " << v[i].sdt << " " << v[i].ngay << endl;
    }
    return 0;
}
// Ngay 15/11/2021
// Nguyen Van A
// 0914141581
// Nguyen Van B
// 0921241515
// Ngay 16/11/2021
// Tran Van C
// 0935141141