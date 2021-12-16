#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

queue<string> q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    char s;
    while(t--)
    {
        cin >> s;
        if(s == '1')
        {
            cout << q.size() << endl;
        }
        else if(s == '2')
        {
            if(q.empty() == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if(s == '3')
        {
            string token;
            cin >> token;
            q.push(token);
        }
        else if(s == '4')
        {
            if(q.empty() == 1)
                continue;
            q.pop();
        }
        else if(s == '5')
        {
            if(q.empty() == 1)
            {
                cout << "-1" << endl;
                continue;
            }
            cout << q.front() << endl;
        }
        else
        {
            if(q.empty() == 1)
            {
                cout << "-1" << endl;
                continue;
            }
            vector<string> x;
            while(q.size() != 0)
            {
                string top = q.front();
                x.push_back(top);
                q.pop();
            }
            cout << x[x.size() - 1] << endl;
            for(int i=0 ; i<x.size() ; i++)
            {
                q.push(x[i]);
            }
        }
    }
    return 0;
}
// 14
// 3 1
// 3 2
// 3 3
// 5
// 6
// 4
// 4
// 4
// 4
// 4
// 3 5
// 3 6
// 5
// 1