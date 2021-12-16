#include <bits/stdc++.h>
using namespace std;

int check(char x)
{
    if(x >= 'a' && x <= 'z')
        return 1;
    if(x >= 'A' && x <= 'Z')
        return 1;
    if(isdigit(x))
        return 1;
    if(x == '.' || x == '_')
        return 1;
    return 0;
}

int Process(string s)
{
    string b[105];
    int dem = 0, j = 0, i;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] == '@')
        {
            s[i] = ' ';
            dem++;
        }
        else
        {
            if(check(s[i]) == 0)
                return 0;
        }
    }
    stringstream ss(s);
    string token;
    while(ss >> token)
    {
        b[j++] = token;
    }
    if(dem > 1 || j > 2 || dem == 0 || b[0].size() > 64 || b[1].size() > 254)
        return 0;
    dem = 0;
    for(int i=0 ; i<b[1].size() ; i++)
    {
        if(b[1][i] == '.')
        {
            dem ++;
        }
    }
    if(dem == 0 || b[1][i-1] == '.')
        return 0;
    return 1;
}

int main()
{
    int n; cin >> n;
    scanf("\n");
    string s;
    for(int i=0 ; i<n ; i++)
    {
        getline(cin, s);
        int kt = Process(s);
        if(kt == 0)  cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
// 4
// code@ptit.edu.vn
// ptit@ptit
// psajdf
// asfkh @askfd.h