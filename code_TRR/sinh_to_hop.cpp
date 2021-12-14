#include <iostream>
using namespace std;
int a[15];
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        int stop = 0;
        int cnt =0;
        while (stop == 0)
        {
            if(cnt != 0){
                for (int i = 1; i <= k; i++)
                    cout << a[i];
                cout << " ";
            }
            int i = k;
            while (a[i] == n - k + i)
                i--;
            if (i < 1)
                stop = 1;
            else
                a[i]++;
            int p = a[i];
            while (i <= k)
                a[i++] = p++;
            cnt ++;
            if(cnt == 6) stop = 1;
        }
        cout << '\n';
    }
    return 0;
}