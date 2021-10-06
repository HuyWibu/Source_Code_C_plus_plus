#include <iostream>
using namespace std;
const int MAXLIST = 10000;
typedef struct list 
{
    int n;
    int nodes[MAXLIST];
};
list ds;
int main()
{
    int n=0;
    int b[MAXLIST]={0};
    do
    {
            cin>> ds.nodes[n];
            b[ds.nodes[n]]++;
            if(b[ds.nodes[n]]>1)
            {
                ds.nodes[n]=-1;
            }
            n++;
    }
    while(getchar()!='\n');
    for(int i=0 ; i<n ; i++)
    {
        if(b[ds.nodes[i]]>0)
        {
            cout<<ds.nodes[i]<<" "<<b[ds.nodes[i]]<<endl;
        }
    }

}