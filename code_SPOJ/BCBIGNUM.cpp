#include <bits/stdc++.h>
using namespace std;

string a,b;

void Add_length()
{
    if (a.size() < b.size())
    {
        int x = b.size() - a.size();
        for (int i = 0; i < x; i++)
        {
            a = "0" + a;
        }
    }
    else if (a.size() > b.size())
    {
        int x = a.size() - b.size();
        for (int i = 0; i < x; i++)
        {
            b = "0" + b;
        }
    }
}

string Add_processing()
{
    string s = "";
    int sum = 0;
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        sum = (a[i] - '0') + (b[i] - '0') + nho;
        nho = 0;
        if (sum < 10)
        {
            s = to_string(sum) + s;
        }
        else
        {
            sum %= 10;
            s = to_string(sum) + s;
            nho = 1;
        }
    }
    if (nho == 1)
        s = "1" + s;
    return s;
}

string Sub_Processing()
{
    string s = "";
    int sub = 0;
    int check = 0;
    if(a < b) check = 1;
    if(check = 1)
    {
        swap(a,b);
        check = 2;
    }
    int muon = 0;
    for(int i = a.size() - 1; i >= 0 ; i--)
    {
        int x = a[i] - '0';
        int y = b[i] - '0';
        if(x >= y) sub = x - y;
        else
        {
            x += 10;
            sub = x - y;
            muon = 1;
        }
        s = to_string(sub) + s;
        if(muon == 1)
        {
            int z = a[i-1] - '0';
            z--;
            a[i-1] = char(z + '0');
        }
    }
    string token ="";
    if(s[0] == '0')
    {
        for(int i=1 ; i<s.size() ; i++)
        {
            token += s[i];
        }
    }
    else
    {
        for(int i=0 ; i<s.size() ; i++)
        {
            token += s[i];
        }
    }
    if(check == 2)
        token = "-" + token;
    return token;
}



int main()
{
    cin >> a >> b;
    Add_length();
    cout << Add_processing() << endl;
    cout << Sub_Processing() << endl;

    return 0;
}