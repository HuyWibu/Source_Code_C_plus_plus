#include <iostream>
using namespace std;
int a[1005] = {0};
int n, k;
void in(int a[], int k)
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << endl;
}
void DQ(int i)
{
   if(i > k){
       in(a, k);
       return;
   }
   for (int j = a[i - 1] + 1; j <= n - k + i; j++){
       a[i] = j;
       DQ(i + 1);
   }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    DQ(1);
    return 0;
}