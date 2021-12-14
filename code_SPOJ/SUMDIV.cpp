#include <bits/stdc++.h>
using namespace std;

long long sum_div(long long n)
{
    long long s = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s += i;
            if ((n / i) != i)
            {
                s += n / i;
            }
        }
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << sum_div(n) << endl;
    }
    return 0;
}