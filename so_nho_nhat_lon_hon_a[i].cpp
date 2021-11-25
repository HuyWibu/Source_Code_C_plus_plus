#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+2];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            set<int> :: iterator it = s.find(a[i]);
            if (*it != *s.rbegin())
            {
                it++;
                cout << *it << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
}