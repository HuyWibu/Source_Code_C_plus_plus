#include <bits/stdc++.h>
using namespace std;

void Process(int n)
{
    int dem = 0;
    int cnt = 0;
    while(n % 2 == 0)
    {
        dem ++;
        cnt ++;
        if(dem > 1)
        {
            cout << 0 << endl;
            return;
        }
        n /= 2;
    }
    for(int i=3 ; i<=n ; i+=2)
    {
        dem = 0;
        while(n % i == 0)
        {
            dem++;
            cnt ++;
            if(dem > 1)
            {
                cout << 0 << endl;
                return;
            }
            n /= i;
        }
    }
    if(cnt == 3)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        Process(n);
    }
    return 0;
}