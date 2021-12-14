#include <iostream>
using namespace std;
void sxmang2chieu(int *p, int n, int m)
{
	for(int i=0 ; i<n ; i++)
	for(int j=0 ; j<m-1 ; j++)
	{
		for(int k=j+1 ; k<m ; k++)
		{
			if(*((*(p+i))+j)>*((*(p+i))+k))
			{
				int temp=*((*(p+i))+j);
				*((*(p+i))+j)=*((*(p+i))+k);
				*((*(p+i))+k)=temp;
			}
		}
	}
}
int main()
{
	int a[50][50];
	int n,m;
	cin >> n >> m;
	for(int i=0 ; i<n ; i++)
	for(int j=0 ; j<m ; j++)
	{
		cin >> a[i][j];
	}
	int* p=&a[0][0];
	sxmang2chieu(p,n,m);
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
