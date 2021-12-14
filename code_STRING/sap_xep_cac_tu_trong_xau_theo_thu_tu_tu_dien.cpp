#include <bits/stdc++.h>
using namespace std;

// muon dung truoc thi return -1 sau thi return 1
int cmp(string x, string y)
{
    if(x.size()!=y.size())
    {
        if(x.size()<y.size())
            return 1;
        else
            return 0;
    }
    else
    {
        if(x<y) return 1;
        else
            return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s,a[1005],tmp;
        getline(cin,s);
        stringstream ss(s);
        int x=0;

        while(ss>>tmp)
        {
            a[x]=tmp;
            x++;
        }
        // for(int i=0 ; i<x-1 ; i++)       ----->>> Cach binh thuong
        // {
        //     for(int j=i+1 ; j<x ; j++)
        //     {
        //         if(a[i]>a[j])
        //             swap(a[i],a[j]);
        //     }
        // }
        // for(int i=0 ; i<x ; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // su dung ham qsort ket hop voi ham cmp cho nhanh

        // cau truc cua ham cmp de so sanh la 
        // int cmp(const void *a, const void *b)

        sort(a,a+x, cmp);
        for(int i=0 ; i<x ; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        
    }
}