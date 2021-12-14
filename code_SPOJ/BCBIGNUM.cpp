#include <bits/stdc++.h>
using namespace std;

string Add_processing(string a, string b)
{
    string s;
    int sum = 0;
    int max = a.size();
    if(max < b.size())
    {
        int x = b.size() - a.size();
        for(int i=0 ; i<x ; i++)
        {
            a = "0" + a;
        }
    }
    int x = a.size() - b.size();
    for(int i=0 ; i<x ; i++)
    {
        b = "0" + b;
    }
    int nho = 0;
    for(int i = max - 1 ; i>=0 ; i++)
    {
        sum = (a[i]-'0') + (b[i]-'0') + nho;
        nho = 0;
        if(sum < 10)
        {
            s[i] = sum + '0';
        }  
        else
        {
            s[i] = (sum%10) + '0';
            nho = 1;
        }
    }
    return;
}

int main()
{
    string a, b;
    cin >> a >> b;

    return 0;

}