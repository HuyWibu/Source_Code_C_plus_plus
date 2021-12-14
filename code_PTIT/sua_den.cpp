#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    int a[n+1]={0};
    for(int i=0; i<b; i++)
    {
        int x; cin >> x;
        a[x] = 1;   // cac den o vi tri bi hong 
    }
    int cnt = 0;
    for(int i = 1; i <= k; i++)
    {
        if(a[i] == 1)   cnt++;
    }
    int res = cnt;
    for(int i = k + 1; i <= n; i++)
    {
        res = res - a[i - k] + a[i];
        if(res < cnt) cnt=res;
    }
    cout << cnt;

}