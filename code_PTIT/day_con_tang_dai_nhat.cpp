#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,max = 0;
        cin >> n;
        int a[n], l[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            l[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[j] > a[i] && l[j] < l[i] + 1)
                    l[j] = l[i] + 1;
                if(l[j] > max)  max = l[j];
            }
        }
        cout << max << endl;
    }
}