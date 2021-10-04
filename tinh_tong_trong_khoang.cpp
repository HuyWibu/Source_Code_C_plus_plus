#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, Q;
        cin >> n >> Q;
        int a[n], s[Q] = {0};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < Q; j++)
        {
            int L, R;
            cin >> L >> R;
            for (int i = L - 1; i <= R - 1; i++)
                s[j] += a[i];
        }
        for (int i = 0; i < Q; i++)
            cout << s[i] << endl;
    }
}