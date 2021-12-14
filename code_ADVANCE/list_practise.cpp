#include <bits/stdc++.h>
using namespace std;
// int sum_dau_cuoi(list<int> l)
// {
//     if(l.size()==0) return -1;
//     if(l.size()==1) return l.front();
//     return l.front()+l.back();
// }
// int  Xu_ly(vector<int> v)
// {
//     list<int> l(v.begin(), v.end());
//     return sum_dau_cuoi(l);

//  }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n+2];
//     for(int i=0 ; i<n ; i++)
//         cin>>a[i];
//     vector<int> v(a,a+n);
//     int sum=0;
//     for(vector<int> :: iterator it=v.begin() ; it!=v.end() ; it++ )
//     {
//         sum+=*it;
//     }
//     // int s=Xu_ly(v);
//     cout<<sum<<endl;
// }


// su dung ham erase
int main()
{
    int n,vt; //n=9
    cin>>n>>vt;
    list<int> v; 
    for(int i=1 ; i<n ; i++)
        v.push_back(i*10);
    // 10 20 30 40 50 60 70 80 90

    list<int> :: iterator it1, it2;
    it1=v.begin();
    it2=v.begin();
    it1++;
    advance(it2,6);
    it1=v.erase(it1);
    it2=v.erase(it2);
    // 10 30 40 50 60 80 90
    it1++;
    it2--;
    v.erase(it1,it2);
    // 10 30 60 80 90
    std::cout << "v contains:";
  for (it1=v.begin(); it1!=v.end(); ++it1)
    std::cout << ' ' << *it1;

}