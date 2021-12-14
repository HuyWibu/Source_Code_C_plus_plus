// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     for(int i=1 ; i<=10 ; i++)
//         v.push_back(i+1);
//     vector<int> :: iterator it=v.begin()+1;
//     v.insert(it,100);
//     v.erase(v.begin()+1);
//     for(vector<int> :: iterator it=v.begin() ; it!=v.end() ; it++)
//     {
//         cout<<*it<<" ";
//     }
//     int k=v.front();
//     cout<<k;
// }
#include <iostream>
#include <set>

int main ()
{
	std::set<int> myset;
	std::set<int>::iterator it;

	// set some initial values:
	for (int i=1; i<=5; i++) 
		myset.insert(i*10);    // set: 10 20 30 40 50

	it = myset.find(20);
	myset.erase (it);
	myset.erase (myset.find(40));

	std::cout << "myset contains:";
	for (it=myset.begin(); it!=myset.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}