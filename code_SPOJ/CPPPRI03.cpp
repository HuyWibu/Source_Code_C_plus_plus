#include <bits/stdc++.h>
using namespace std;

int a[10005] = {0};

void SangNT()
{
    for(int i=2 ; i<=10005 ; i++)
    {
        if(a[i] == 0)
        {
            for(int j=2*i ; j<=10005 ; j+=i)
            {
                a[j] = 1;
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    SangNT();
    while(t--)
    {
        int n; cin >> n;
        for(int i=2 ; i<=n ; i++)
        {
            if(a[i] == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}