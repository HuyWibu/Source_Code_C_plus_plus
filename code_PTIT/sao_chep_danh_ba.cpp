#include <bits/stdc++.h>
 
using namespace std;
 
struct danhba
{
    string name;
    string ten, dem;
    string sdt;
    string day;
};
 
string getTen(string a){
    string tmp;
    stringstream ss(a);
    while(ss >> tmp){}
    return tmp;
}
 
string getDem(string a){
    string tmp = "";
    int j = a.length() - 1;
    while(a[j] != ' ') j--;
    for (int i = j - 1; a[i] != ' '; i--){
        tmp += a[i];
    }
    string res = "";
    for (int i = 0; i < tmp.length(); i++){
        res = tmp[i] + res;
    }
    return res;
}
 
int check(string s) {
    string tmp = "";
    for (int i = 0; i < 4; i++){
        tmp += s[i];
    }
    if(tmp == "Ngay") return 1;
    if(!isdigit(tmp[0])) return 2;
    return 0;
}
 
string getngay(string s){
    string res = "";
    for (int i = 5; i < s.length(); i++){
        res += s[i];
    }
    return res;
}
 
bool cmp(danhba a, danhba b){
    if(a.ten == b.ten) return a.dem < b.dem;
    return a.ten < b.ten;
}
 
int main () {
    freopen("SOTAY.txt", "r", stdin);
    freopen("DIENTHOAI.txt", "w", stdout);
    string day = "";
    string tmp;
    vector<danhba> a;
    int i = 0;
    while (getline(cin, tmp)){
        // cout << tmp << endl;
        // cin.ignore();
        if(check(tmp) == 1) {
            day = getngay(tmp);  
        }
        else if(check(tmp) == 2){
            danhba x;
            x.day = day;
            x.name = tmp;
            x.ten = getTen(tmp);
            x.dem = getDem(tmp);
            getline(cin, tmp);
            x.sdt = tmp;
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++){
        cout << a[i].name << ": " << a[i].sdt << " " << a[i].day << endl;
    }
    return 0;
}
// Ngay 15/11/2021
// Nguyen Van A
// 0914141581
// Nguyen Van B
// 0921241515
// Ngay 16/11/2021
// Tran Van C
// 0935141141