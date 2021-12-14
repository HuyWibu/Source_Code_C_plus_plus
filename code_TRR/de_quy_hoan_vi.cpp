#include <iostream>
using namespace std;
int a[1005];
int flag[100] = {0};
int res = 0;
void in(int n)
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
void DQ(int i, int n)
{
    if(i > n){
        in(n);
        return;
    }
    for (int j = 1; j <= n; j++){
        if(flag[j] == 0){   // !flag[j]
            a[i] = j;
            flag[j] = 1;
            DQ(i + 1, n);
            flag[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    DQ(1, n);
    return 0;
}