#include <iostream>
using namespace std;
typedef long long ll;
const ll so_hoan_hao[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

bool la_so_hoan_hao(ll n) 
{
    for (int i = 0; i < 7; i++) 
        if (n == so_hoan_hao[i]) 
            return true;
    return false;
}

int main()
{
    int t ;
    ll n ;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << la_so_hoan_hao(n) << endl;
    }
    return 0;
}