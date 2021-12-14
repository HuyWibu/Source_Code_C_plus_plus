#include <iostream>
using namespace std;
int stop=0;
void khoitao(int a[], int n)
{
	for(int i=0 ; i<n ; i++)	// khoi tao cau hinh ban dau
		a[i]=0;
}
void in(int a[], int n)
{
	for(int i=0 ; i<n ; i++)	
		cout<<a[i];	
	cout<<" ";
}
void sinh(int a[], int n)
{
	int i=n-1;
	while(i>=0 && a[i]==1)	//duyet tu cuoi day, gap 1 thi thay bang 0
	{
		a[i]=0;
		i--;
	}
	if(i==-1)	// neu i<=0 thi dung (stop=1)
	{
		stop=1;
	}
	else
		a[i]=1;	// nguoc lai thi gan a[i]=1
}
void nhiphan(int a[], int n)
{
	do
	{
		in(a,n);
		sinh(a,n);
	}
	while(stop==0);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[100005]={0}, n;
		cin>>n;
		khoitao(a,n);
		nhiphan(a,n);
		stop=0;
		cout<<endl;
	}
}
/*
Buoc 1: Khoi tao cau hinh ban dau 000...00( n so 0 )
Buoc 2: Xet tu cuoi day ve dau day gap so 0 dau tien thi thay no bang so 1 va dat tat ca cac phan tu 
phia sau no la so 0
Buoc 3: In cau hinh va quay lai buoc 2. Sinh den khi nao gap cau hinh cuoi cung : 111...11( n so 1)
thi dung lai
*/
