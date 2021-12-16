#include <bits/stdc++.h>
using namespace std;
int stop = 0, a[1000005], n, k;

void xuly()
{
    for(int i=1 ; i<=k ; i++)
        a[i] = i;
    while(stop == 0)
    {
        for(int i=1 ; i<=k ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        int i = k;
        while(a[i] == n - k + i)
        {
            i--;
        }
        if(i == 0)
            stop = 1;
        else
        {
            a[i] ++;
        }
        int p = a[i];
        while(i <= k)
        {
            a[i++] = p++;
        }
    }
}

int main()
{
    cin >> n >> k;
    xuly();
    return 0;
}