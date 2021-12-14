#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int a[100005], i = 0;

void init()
{
    i = 0;
}

void empty()
{
    if(i == 0) cout << "1\n";
    else cout << "0\n";
}

void push()
{
    int aoi; cin >> aoi;
    i++; a[i] = aoi;
}

void top()
{
    if(i == 0) cout << "-1\n";
    else cout << a[i] << endl;
}

void size()
{
    cout << i << endl;
}

void pop()
{
    if(i == 0) return;
    i--;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x; 
    while(cin >> x)
    {
        if(x == "end")  
            break;
        if(x == "init")
        {
            init();
        }
        else if(x == "empty")
        {
            empty();
        }
        else if(x == "top")
        {
            top();
        }
        else if(x == "size")
        {
            size();
        }
        else if(x == "pop")
        {
            pop();
        }
        else
        {
            push();
        }     
    }
    return 0;
}

// init
// empty
// push 2
// empty
// top
// push 1
// size
// top
// pop
// top
// init
// push 1
// top
// init
// top
// end