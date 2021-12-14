#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	scanf("\n");
    map<string, int> mp;
    vector<string> v;
    string s[n+1];
    for(int i=0 ; i<n ; i++){
        getline(cin, s[i]);
        if(i==0 || s[i-1] == ""){
            v.push_back(s[i]);
        }
        else if(s[i] != "")
            mp[v.back()]++;
    }
    for(int i=0 ; i<v.size() ; i++){
        cout << v[i] << ": " << mp[v[i]] << endl;
    }
}
// 9
// Home/accommodation
// What kind of housing/accommodation do you live in?
// Who do you live with?
// How long have you lived there?

// Study
// Describe your education
// What is your area of specialization?
// Why did you choose to study that major?