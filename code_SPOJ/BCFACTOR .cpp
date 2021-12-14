#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll x){
    if(x<2) return false;
    for(int i=2 ; i<=sqrt(x) ; i++){
        if(x%i==0)  return false;
    }
    return true;
}

void TSNT(ll x){
    if(check(x)){
        cout << x << " 1" << endl;
    }
    else{
        int dem = 0;
        while(x%2==0){
            dem++;
            x/=2;
            if(x%2!=0){
                cout << "2" << " " << dem << endl;
            }
        }
        for(int i=3 ; i*i<=x ; i+=2){
            dem = 0;
            while(x%i == 0){
                dem++;
                x/=i;
                if(x%i != 0){
                    cout << i << " " << dem << endl;
                }
            }
        }
        if(x!=1) cout << x << " " << "1" << endl;
    }
}

int main(){
    ll n; cin >> n;
    TSNT(n);
    return 0;
}