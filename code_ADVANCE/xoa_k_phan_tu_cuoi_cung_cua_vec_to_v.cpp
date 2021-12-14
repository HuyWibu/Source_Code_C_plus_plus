#include <bits/stdc++.h>
using namespace std;
vector<int> vectorErase(vector<int> v, int k)
{
    vector<int>:: iterator it = v.begin();
	advance(it,v.size()-k);
    v.erase(it,v.end());
    return v;
}
int main()
{
    vector<int> v;
    int n,k;
    cin>>n>>k;
    int index;
    for(int i=0 ; i<n ; i++)
    {
        cin>>index;
        v.push_back(index);
    }
    vectorErase(v,k);
    for(vector<int> :: iterator it=v.begin() ; it!=v.end() ; it++)
    {
        cout<<*it<<" ";
    }
}
