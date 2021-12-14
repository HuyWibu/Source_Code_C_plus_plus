#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;
        vector<int> v;
        vector<int> m;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(a, a+n);
        int max = a[n-1];
        for(int i=0 ; i<v.size() ; i++){
            if(max == v[i]){
                m.push_back(k);
            }
            m.push_back(v[i]);
        }
        for(int i=0 ; i<m.size() ; i++){
            if(m[i] < 0) cout << m[i] << " ";
        }
        for(int i=0 ; i<m.size() ; i++){
            if(m[i] > 0) cout << m[i] << " ";
        }
    }
}