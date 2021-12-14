#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll max = -100000;
        for (int i = 0; i < n; i++)
        {
            ll tich = 1;
            for (int j = i; j < n; j++)
            {
                tich *= a[j];
                if (tich > max)
                {
                    max = tich;
                }
            }
        }
        cout << max << endl;
    }
}