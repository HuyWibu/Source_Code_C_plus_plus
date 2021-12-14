#include <bits/stdc++.h>
using namespace std;

bool ktra(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int k = (int)s[i];
        if (k == 64)
            dem++;
        if (k != 95 && k != 46 && (k < 46 || k > 57) && (k < 65 || k > 90) && (k < 97 || k > 122) && dem > 1 && k == 32)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        scanf("\n");
        bool check = true;
        string s;
        getline(cin, s);
        int last = s.size() - 1;
        if (s.find(".") == string ::npos || s.find("@") == string::npos || s[last] == '.')
        {
            cout << "NO\n";
        }
        else
        {
            stringstream ss(s);
            string token;
            int dem = 0;
            while (getline(ss, token, '@'))
            {
                if (dem == 0)
                {
                    if (token.size() > 64 || token.size() <= 0 || ktra(s) == false)
                    {
                        check = false;
                    }
                    dem++;
                }
                else
                {
                    string tmp, temp = token;
                    stringstream p(temp);
                    while (getline(p, tmp, '.'))
                    {
                        if (tmp.size() == 0)
                            check = false;
                    }
                    if (token.size() > 254 || token.size() <= 0 || ktra(s) == false)
                    {
                        check = false;
                    }
                }
            }
            if (check == true)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}