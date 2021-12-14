#include <bits/stdc++.h>
using namespace std;
// int max(int a, int b) return a > b;
long long max_loot(long long a[], int n)
{
    if (n == 1)
        return a[0];
    if (n == 2)
        return max(a[0], a[1]);
    long long dp[n];
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(a[i] + dp[i - 2], dp[i - 1]); // muc dich la de ko tinh tong 2 so lien ke
    }
    return dp[n - 1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << max_loot(a, n) << endl;
    }
}