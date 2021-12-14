#include <iostream>
using namespace std;
int stop = 0;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100005] = {0}, n;
        cin >> n;
        for (int i = 0; i < n; i++) // khoi tao cau hinh ban dau
            a[i] = 0;
        do
        {
            for (int i = 0; i < n; i++)
                cout << a[i];
            cout << endl;
            int i = n - 1;
            while (i >= 0 && a[i] == 1) //duyet tu cuoi day, gap 1 thi thay bang 0
            {
                a[i] = 0;
                i--;
            }
            if (i == -1) // neu i<=0 thi dung (stop=1)
            {
                stop = 1;
            }
            else
                a[i] = 1; // nguoc lai thi gan a[i]=1
        } while (stop == 0);
        stop = 0;
        cout << endl;
    }
}