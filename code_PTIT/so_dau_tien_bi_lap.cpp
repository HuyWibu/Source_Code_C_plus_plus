#include<bits/stdc++.h>

using namespace std;
void Xu_Ly(){
    long long a[100005], k, n;
    map<int,int> m;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin>> a[i];
        m[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(m[a[i]] > 1){
            cout << a[i];
            return;
        }
    }
    cout << "NO";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Xu_Ly();
        cout << endl;
    }
}