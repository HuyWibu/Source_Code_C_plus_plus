#include <iostream>
using namespace std;
int a[1005];
void print(int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}   
void DQ(int i, int n)
{
    if(i == n) {
        print(n);
        return;
    }
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        DQ(i + 1, n);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    DQ(0, n);
    return 0;
}