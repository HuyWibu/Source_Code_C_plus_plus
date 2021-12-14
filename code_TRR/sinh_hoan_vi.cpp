#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[12] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int stop = 0;
    int cnt = 0;
    while (stop == 0)
    {
        if(cnt)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << endl;
        }
        int i = n - 1;
        while (i > 0 && a[i] > a[i + 1])
            i--;
        if (i < 1)
            stop = 1;
        else
        {
            int k = n;
            while (a[i] > a[k])
                k--;
            swap(a[i], a[k]);
            int l = i + 1;
            int r = n;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        cnt ++;
        if(cnt == 6) stop = 1;
    }
    return 0;
}
 
