#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    while(cin >> n){
        if(n == 0) break;
        long long gt = 1;
        for(int i = 2 ; i<=n ; i++){
            gt *= i;
        }
        cout << gt << endl;
    }
    
    return 0;
}