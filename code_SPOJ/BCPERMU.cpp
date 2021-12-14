#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[100005];
    for(int i=1 ; i<=n ; i++)
    {
        a[i] = i;
    }
    int stop = 0;
    while(stop == 0)
    {
        for(int i=1 ; i<=n ; i++)
        {
            cout << a[i];
        }
        cout << endl;
        int i = n - 1;
        while(i > 0 && a[i] > a[i+1])
        {
            i--;
        }
        if(i < 1)
            stop = 1;
        else
        {
            int k = n;
            while (a[i] > a[k])
                k--;
            swap(a[i], a[k]);
            sort(a + i + 1, a + n + 1);
        }
    }
    return 0;
}