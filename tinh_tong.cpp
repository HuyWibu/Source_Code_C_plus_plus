#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DATA.in", "r", stdin);
    string s;
    long long sum = 0;
    while (cin >> s)
    {
        if (s.size() <= 9)
        {
            bool check = true;
            for (int i = 0; i < s.size(); i++)
            {
                if (isdigit(s[i]) == 0)
                {
                    check = false;
                    break;
                }
            }
            if (check == true)
            {
                int k = stoi(s);
                sum += k;
            }
        }
    }
    cout << sum << endl;
}