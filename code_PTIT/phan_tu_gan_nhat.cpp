#include <bits/stdc++.h>
using namespace std;
int tim_diem_giao(int a[], int low, int high, int x)
{
    if (a[high] <= x)
        return high;
    if (a[low] > x)
        return low;
    int mid = (low + high) / 2;
    if (a[mid] <= x && a[mid + 1] > x)
        return mid;
    if (a[mid] < x)
        return tim_diem_giao(a, mid + 1, high, x);
    return tim_diem_giao(a, low, mid - 1, x);
}
void in(int a[], int x, int k, int n)
{
    int left = tim_diem_giao(a, 0, n - 1, x);
    int right = left + 1;
    int cnt = 0;
    if (a[left] == x)
        left--;
    while (left >= 0 && right < n && cnt < k)
    {
        if (x - a[left] <= a[right] - x)
            cout<<a[left--]<<" ";
        else
            cout<<a[right++]<<" ";
        cnt++;
    }
    while(left>=0 && cnt < k)
    {
        cout<<a[left--]<<" ";
        cnt++;
    }
    while(right<n && cnt < k)
    {
        cout<<a[right++]<<" ";
        cnt++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k, x;
        cin >> k >> x;
        in(a,x,k,n);
        cout<<endl;
    }
    return 0;
}