#include <iostream>
using namespace std;
int stop = 0;

int main()
{
    int a[100005] = {0}, n;
    cin >> n;
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        int i = n - 1;
        while(i >= 0 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if(i == -1)
        {
            stop = 1;
        }
        else
        {
            a[i] = 1;
        }
    } while (stop == 0);
    return 0;
}