#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int page = 0;
 
int check(string s) {
    string tmp = "";
    for (int i = 0; i < 5; i++) 
        tmp += s[i];
    if(tmp == "Level") return 1;
    tmp.pop_back();
    if(tmp == "Page") return 2;
    return 0;
}
 
int main () {
    freopen("VANBAN.txt", "r", stdin);
    freopen("MUCLUC.txt", "w", stdout);
    string s;
    while(getline(cin, s)) {
        if(check(s) == 2) page = s[5] - '0';
        else if(check(s) == 1) {
            for (int i = 0; i < s[5] - '0'; i++){
                cout << ">";
            }
            for (int i = 8; i < s.length(); i++){
                cout << s[i];
            }
            cout << "--- ";
            cout << page << endl;
        }
    }
    return 0;
}