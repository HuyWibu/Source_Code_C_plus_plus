#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fp1, fp2;
    fp1.open("DATA1.in");
    map<string, bool> mp1;
    map<string, bool> mp2;
    map<string, bool> mp3;
    string tmp;
    while (fp1 >> tmp)
    {
        for (int i = 0; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        mp1[tmp] = true;
        mp2[tmp] = true;
    }
    fp1.close();
    string s = "";
    fp2.open("DATA2.in");
    while (fp2 >> tmp)
    {
        for (int i = 0; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        mp1[tmp] = true;
        if (mp2[tmp] == true)
        {
            mp3[tmp] = true;
        }
    }
    for (auto it : mp1)
        cout << it.first << " ";
    cout << endl;
    for (auto it : mp3)
        cout << it.first << " ";
}