#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[1005] ={0}, max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            a[s[i]]++;
            if (max < a[s[i]])
                max = a[s[i]];
        }
        if (max <= s.length() - max + 1)
            cout << "1";
        else
            cout << "0";
        cout<<endl;
    }
}