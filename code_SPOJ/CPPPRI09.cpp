#include <bits/stdc++.h>
using namespace std;

void Process(int n)
{
    if(n == 1)
        cout << 1 << " " << 1 << endl;
    else
    {
        int dem = 0;
        while(n%2 == 0)
        {
            dem++;
            n /= 2;
        }
        if(dem)
        {
            cout << 2 << " " << dem << " ";
        }
        for(int i=3 ; i<=n ; i+=2)
        {
            dem = 0;
            while(n%i == 0)
            {
                dem++;
                n /= i;
            }
            if(dem)
                cout << i << " " << dem << " ";
        }
        cout << endl;
    }
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