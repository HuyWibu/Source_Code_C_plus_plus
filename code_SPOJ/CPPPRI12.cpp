#include<bits/stdc++.h>
using namespace std;

void Process(int n, int k)
{
    int dem = 0;
    while(n%2 == 0)
    {
        dem++;
        if(dem == k)
        {
            cout << 2 << endl;
            return;
        }
        n/=2;
    }
    for(int i=3 ; i<=n ; i+=2)
    {
        while(n%i == 0)
        {
            dem++;
            if(dem == k)
            {
                cout << i << endl;
                return;
            }
            n/=i;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        Process(n, k);
    }
    return 0;
}