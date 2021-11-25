#include <bits/stdc++.h>
using namespace std;
int Solve(int a[], int n, int k)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= k)
            dem++;
    int loai = 0;
    for (int i = 0; i < dem; i++)
        if (a[i] > k)
            loai++;
    int kq = loai;
    for (int i = 0, j = dem; j < n; j++, i++)
    {
        if (a[i] > k)
            loai--;
        if (a[j] > k)
            loai++;
        kq = (kq < loai) ? kq : loai;
    }
    return kq;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], dem = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << Solve(a, n, k) << endl;
    }
}