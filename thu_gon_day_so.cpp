#include <bits/stdc++.h>
using namespace std;

int XL(int a[], int n){
    stack<int> s;
    for (int i=0 ; i<n ; i++) {
        if (s.empty() or (a[i] + s.top())%2)
            s.push(a[i]);
        else s.pop();
    }
    return s.size();
}

main(){
    int n; cin >> n;
    int a[n+55];
    for (int i=0 ; i<n ; i++)
        cin >> a[i];
    cout << XL(a,n);
}

// 5
// 2 3 4 5 6
// 10
// 1 5 5 8 6 4 3 5 9 3