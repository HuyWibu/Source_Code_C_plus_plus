#include <bits/stdc++.h>
using namespace std;

int a[10005] = {0};

void Process()
{
    for(int i=2 ; i<=10005 ; i+=2)
    {
        a[i] = 2;
    }
    for(int i=3 ; i<=10005 ; i+=2)
    {
        if(a[i] == 0)
        {
            a[i] = i;
            for(int j=i*i ; j<=10005 ; j+=i)
            {
                if(a[j] == 0)
                    a[j] = i;
            }
        }
    }
}

int main()
{
    Process();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << 1 << " ";
        for(int i=2 ; i<=n ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}