#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n+2][n+2]={0};
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>m;
    int b[m+2][m+2]={0};
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>b[i][j];
        }
    }
    int row_a=0;    //  la hang cua ma tran a
    int row_b=0;  //  la hang cua ma tran b
    while(row_a<n)  // khi nao hang cua ma tran a con nho hon thi tiep tuc while
    {
        int col_a=0;    // la cot cua ma tran a
        int col_b=0;    // la cot cua ma tran b
        while(col_a<n)  // khi nao cot cua ma tran a con nho hon n thi tiep tuc while
        {
            
            a[row_a][col_a]*=b[row_b][col_b];   // a[hang][cot]=a[hang][cot]*b[hang][cot]
            col_a++;    // cot cua ma tran a cong len 1
            col_b++;
            if(col_b==m) // khi nao cot cua ma tran b bang m thi lai gan =0
                col_b=0;
        }
        row_a++;
        row_b++;
        if(row_b==m)    // khi nao hang cua ma tran b bang m thi lai gan =0
            row_b=0;
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}