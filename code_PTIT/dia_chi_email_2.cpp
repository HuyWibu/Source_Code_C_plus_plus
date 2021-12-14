#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    scanf("\n");
    string s[n+5], a[n + 5];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        string x,tmp, m;
        getline(cin, x);
        for(int i=0 ; i<x.size() ; i++)
        {
            x[i] = tolower(x[i]);
        }
        stringstream ss(x);
        int j=0;
        while(ss >> a[j])
        {
            j++;
        }
        m = a[j-1];
        for(int l=0 ; l<j-1 ; l++)
        {
            m += a[l][0];
        }
        s[k++] = m;
    }
    for(int i=0 ; i<k ; i++)
    {
        char m='2';
        for(int j=i+1 ; j<k ; j++)
        {
            if(s[i] == s[j])
            {
                s[j] += m;
                m++;
            }
        }
        cout << s[i] << "@ptit.edu.vn" << endl;
    }

}