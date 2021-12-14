#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n;
        cin>>n;
        int i=2;
        while(true)
        {
            float k=n*i;
            if(k==(int)k)
            {
                cout<<i<<endl;
                break;
            }
            else   
                i++;
        }
    }
}