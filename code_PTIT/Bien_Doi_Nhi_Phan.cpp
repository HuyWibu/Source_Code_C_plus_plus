#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a[105][105];
		int n,m;
		cin>>n>>m;
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				if(a[i][j]==1)
				{
					a[i][j]=2;
				}
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				if(a[i][j]==2)			// gan nhung vi tri 1 ban dau bang 2
				{
					for(int l=0 ; l<m ; l++)	// giu nguyen hang co vtri ban dau la 1 tang cac hang con lai len 1
					{
						if(a[i][l]==0)
						{
							a[i][l]=1;
						}
					}
					for(int k=0 ; k<n ; k++)	// giu nguyen cot co vtri ban dau la 1 tang cac cot con lai len 1
					{
						if(a[k][j]==0)
						{
							a[k][j]=1;
						}
					}
				}
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				if(a[i][j]==2)
				{
					a[i][j]=1;
				}
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
