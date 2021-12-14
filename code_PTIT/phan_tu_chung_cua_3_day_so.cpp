#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n';

void nhap(ll n, ll a[])
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
ll a[100005]={};
ll b[100005]={};
ll c[100005]={};
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n1, n2, n3, flag = 0;;
        cin >> n1 >> n2 >> n3;
        nhap(n1, a); nhap(n2, b); nhap(n3, c);
        int x = 0, y = 0, z = 0;
        while(x < n1 && y < n2 && z < n3){
            if(a[x] == b[y] && a[x] == c[z]){
                cout << a[x] << " ";
                flag = 1;
                x++; y++; z++;
            }
            else if(b[y] < a[x]) y++;
            else if(c[z] < a[x]) z++;
            else x++;
        }
        if(flag == 0) cout << -1;
        cout << endl;
    }
    return 0;
}