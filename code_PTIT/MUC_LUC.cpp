#include <bits/stdc++.h>
using namespace std;

string getPage(string s)
{
    int x = s.size() - 1;
    string token = "";
    token += s[x];
    return token;
}

char getLevel(string s)
{
    char token = s[5];
    return token;
}

string getTopic(string s)
{
    string token = "";
    int i = 0;
    while (i < 8)
        i++;
    for (int j = i; j < s.size(); j++)
    {
        token += s[j];
    }
    stringstream ss(token);
    string tmp = "";
    string x;
    while (ss >> x)
    {
        tmp = tmp + x + " ";
    }
    tmp.pop_back();
    return tmp;
}

int check(string s)
{
    string tmp = "";
    for (int i = 0; i < 5; i++) 
        tmp += s[i];
    if(tmp == "Level") return 2;
    tmp.pop_back();
    if(tmp == "Page") return 1;
    return 0;
}

int main()
{
    freopen("VANBAN.txt", "r", stdin);
    freopen("MUCLUC.txt", "w", stdout);
    string s;
    string page;
    while (getline(cin, s))
    {    
        if (check(s) == 1)
        {
            page = getPage(s);
        }
        else if(check(s) == 2)
        {
            for(int i=0 ; i<s[5] - '0' ; i++)
                cout << ">";
            cout << getTopic(s) << "---";
            cout << page << endl;
        }
    }
    return 0;
}
