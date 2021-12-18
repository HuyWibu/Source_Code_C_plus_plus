#include <bits/stdc++.h>
using namespace std;

const int MAX = 10005;

int a[10005] = {0};

void SangNT()
{
    a[1] = 1;
    for(int i=2 ; i<=MAX ; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i*i ; j<=MAX ; j+=i)
            {
                a[j] = 1;
            }
        }
    }
}

void in(int m, int n)
{
    for(int i=m ; i<=n ; i++)
    {
        if(a[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    SangNT();
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> m >> n;
        in(m, n);
    }
    return 0;
}