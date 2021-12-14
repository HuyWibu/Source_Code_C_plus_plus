#include <bits/stdc++.h>
using namespace std;

bool Process(string s){
    int b = 0, e = s.size() - 1;
    while(b < e){
        if(s[b] != s[e])
            return false;
        b++;
        e--;
    }
    return true;

}

int main(){
    int t; cin >> t;
    scanf("\n");
    while(t--){
        string s; cin >> s;
        if(Process(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}