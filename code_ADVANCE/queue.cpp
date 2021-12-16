#include <bits/stdc++.h>
using namespace std;

// LIFO: Last in first out : Stack
// FIFO: First in first out: Queue
// O(1)
// push
// pop
// empty
// size
// front

// sinh so nhi phan tu 1 den n

vector<string> v;

void init()
{
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while(v.size() < 10000)
    {
        string top = q.front();
        v.push_back(top + "0");
        v.push_back(top + "1");
        q.pop();
        q.push(top + "0");
        q.push(top + "1");
    }
}

int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0 ; i<n ; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}