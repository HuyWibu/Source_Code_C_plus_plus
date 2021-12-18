#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int check(ll n)
{
    if(n<2) return 0;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

void Process(ll n)
{
    if(check(n))
        cout << n << endl;
    else
    {
        ll max = 1;
        while(n % 2 == 0)
        {
            max = 2;
            n /= 2;
        }
        for(int i = 3 ; i * i <= n ; i += 2)
        {
            while(n%i == 0)
            {
                if(max < i)
                    max = i;
                n /= i;
            }
        }
        if(n != 1)
        {
            if(max < n)
                max = n;
        }
        cout << max << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        Process(n);
    }
    return 0;
}