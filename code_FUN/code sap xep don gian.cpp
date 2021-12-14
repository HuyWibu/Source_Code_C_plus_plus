#include <iostream>
using namespace std;
void sxbangcontro(int *p, int n)
{
	int temp;
	for(int i=0 ; i<n-1 ; i++)
	for(int j=i+1 ; j<n ; j++)
	{
		if(*(p+i)>*(p+j))
		{
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
		}
	}
}
int main()
{
	int a[50];
	int n;
	int* p;
	
	// nhap so phan tu cua mang
		
	cin >> n;
	
	// nhap cac phan tu cua mang
	
	for(int i=0 ; i<n ; i++)
		cin >> a[i];
	p=a;
	sxbangcontro(p,n);
	for(int i=0 ; i<n ; i++)
	{
		cout << a[i] << " ";	
	}
	cout <<endl;
}
