#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int a[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
            return mid;
        if (x < a[mid])
            return Binary_Search(a, low, mid - 1, x);
        return Binary_Search(a, mid + 1, high, x);
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            int k = abs(x + a[i]);
            int ans = Binary_Search(a, i + 1, n - 1, k);
            if (ans != -1)
            {
                check = true;
                break;
            }
        }
        if (check == false)
            cout << "-1\n";
        else
            cout << "1\n";
    }
}