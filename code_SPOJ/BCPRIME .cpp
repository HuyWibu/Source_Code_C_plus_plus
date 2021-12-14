#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a){
    if(a<2) return false;
    for(int i=2 ; i<=sqrt(a) ; i++){
        if(a%i == 0) return false;
    }
    return true;
}

int main(){
    ll x; cin >> x;
    if(check(x)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}