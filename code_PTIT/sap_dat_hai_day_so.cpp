#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n], b[m], temp_1[n], temp_2[n];// temp_1 la mang co xuat hien trong b, temp_2 thi ko
        set<int> s;
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<m ; i++)
        {
            cin>>b[i];
            s.insert(b[i]);
        }
        int tg_1=0, tg_2=0; // tg_1 va tg_2 lan luot la so ptu cua temp_1 va temp_2
        for(int i=0 ; i<n ; i++)
        {
            if(s.count(a[i])==0)
            {
            	temp_2[tg_2]=a[i];
            	tg_2++;
			}
                
            else
            {
            	temp_1[tg_1]=a[i];
            	tg_1++;
			}
        }
        // sap xep temp_2 theo tang dan
        sort(temp_2,temp_2+tg_2);
        vector<int> v;
        for(set<int >:: iterator it=s.begin() ; it!=s.end() ; it++)
        {
            v.push_back(*it);
        }
        int j=0;    // j la bien tang tu 0 den tg_1 de doi cho
        // khai bao con tro iterator
        vector<int> :: iterator it=v.begin();
        while(j<tg_1)
        {
            for(int i=0 ; i<v.size() ; i++)
            {
                for(int i=0 ; i<tg_1 ; i++)
                {
                    if(temp_1[i]==*it && i!= j)
                    {
                        swap(temp_1[i], temp_1[j]);
                        j++;
                    }
                }
                it++;
            }
        }
        for(int i=0 ; i<tg_1 ; i++)
            cout<<temp_1[i]<<" ";
        for(int i=0 ; i<tg_2 ; i++)
            cout<<temp_2[i]<<" ";
    }
}