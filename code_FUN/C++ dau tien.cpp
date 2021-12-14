#include <iostream>
using namespace std;

int main()
{
	int a[50],b[50];
	int n;
	int* p;
	
	// nhap so phan tu cua mang
		
	cin >> n;
	
	// nhap cac phan tu cua mang
	
	for(int i=0 ; i<n ; i++)
		cin >> a[i];
	p=a;
	int d=0;
	while(d<n)
	{
		b[d]=*(p+d)+1;
		d++;
	}
	for(int i=0 ; i<d ; i++)
	{
		cout << b[i] <<" ";
	}
	cout << endl;
}
// vip_841233
//duongit123dz
