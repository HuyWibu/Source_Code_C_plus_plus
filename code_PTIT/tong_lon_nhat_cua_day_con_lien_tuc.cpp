#include <bits/stdc++.h>
using namespace std;
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
        {
            cin >> a[i];
        }
        long long s = 0, res = -1;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            if (s > res)
                res = s;
            if (s < 0)
                s = 0;
        }
        cout << res << endl;
    }
}