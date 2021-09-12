#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll dem = 0;
        cin >> n >> k;
        int a[n + 10];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            int vitri = a[i] + k;
            // lower_bound tra ve dia chi cua phan tu thoa man
            // dia chi cua mang a cung chinh la dia chia cua phan tu a[0]
            int temp = lower_bound(a + i, a + n, vitri) - a;
            int x = temp - i - 1;
            dem += x;
        }
        cout << dem << endl;
    }
}
