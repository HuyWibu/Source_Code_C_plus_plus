#include <bits/stdc++.h>
using namespace std;
struct Nhatky
{
    string page, level, ten;
};
Nhatky ds[100005]; int dem=0;

int main()
{
    freopen("VANBAN.txt", "r", stdin);
    freopen("MUCLUC.txt", "w", stdout);
    string s;
    while(getline(cin, s))
    {
        if(s.find("Page") != string::npos)
        {
            int k = s.size() - 1;
            while(s[k] == ' ')
            {
                k--;
            }
            string res = "";
            for(int j = k + 1 ; j < s.size() ; j++)
            {
                res += s[j];
            }
            dem++;
            ds[dem].page = res;

        }
        else if(s.find("Level") != string::npos)
        {
            ds[dem].level = s.substr(5, 1);
            ds[dem].ten = "";
            for(int i = 8 ; i < s.size() ; i++)
            {
                ds[dem].ten += s[i];
            }
        }
    }
    for(int i=1 ; i<= dem ; i++)
    {
        if(ds[i].level == "1")
        {
            cout << ">";
        }
        else if(ds[i].level == "2")
        {
            cout << ">>";
        }
        else
        {
            cout << ">>>";
        }
        cout << ds[i].ten << "--- " << ds[i].page << endl;
    }
    return 0;
}
