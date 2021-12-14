#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string a;
        cin >> n >> a;
        vector<int> v;
        for(int i=0 ; i<a.size() ; i++)
        {
            if(a[i] == '2')
                v.push_back(2);
            if(a[i] == '3')
                v.push_back(3);
            if(a[i] == '4')
            {
                v.push_back(2);
                v.push_back(2);
                v.push_back(3);
            }
            if(a[i] == '5')
                v.push_back(5);
            if(a[i] == '6')
            {
                v.push_back(3);
                v.push_back(5);
            }
            if(a[i] == '7')
                v.push_back(7);
            if(a[i] == '8')
            {
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            if(a[i] == '9')
            {
                v.push_back(3);
                v.push_back(3);
                v.push_back(7);
                v.push_back(2);
            }
        }
        int x=v.size();
        int b[x];
        for(int i=0 ; i<x ; i++)
        {
            b[i] = v[i];
        }
        sort(b,b+x,cmp);
        for(int i=0 ; i<x ; i++)
            cout<<b[i];
        cout<<endl;
    }
}