#include <bits/stdc++.h>
using namespace std;
 struct cmp{
 	bool operator() (int a,int b) {return a>b;}
 };
// int main() {

// 	set <int,cmp> s;

// 	s.insert(1);  // s={1}
	
// 	s.insert(4);  // s={4,1}
	
// 	s.insert(2);  // s={4,2,1}
	
// 	s.insert(9);  // s={9,4,2,1}
	
// 	for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
// 		cout<< *it << " ";
// 	}
//         cout<<endl;
//         cout << s.size();
//         return 0;
// }
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(2);
    set<int,cmp> s;
    for(int i=0 ; i<4 ; i++)
    {
        s.insert(v[i]);
    }
    int k=v.back();
    for(set<int> :: iterator it=s.begin() ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    set<int> :: iterator it1=s.find(3);
    s.erase(it1);
    for(set<int> :: iterator it=s.begin() ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<k<<endl;
}
