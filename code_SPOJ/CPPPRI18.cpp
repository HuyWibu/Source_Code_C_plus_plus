#include<bits/stdc++.h>
 
using namespace std;
 
 
void process(){
    int m,n,a,b;
    cin >> m >> n >> a >> b;
    int ans = 0;
    for(int i = m ; i <= n ;i++){
        if (i % a == 0 || i % b == 0) ans++;
    }  
    cout << ans << endl;
}
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
    return 0;
} 