#include<iostream>
using namespace std;
int n,stop=0,a[100];
void khoitao()
{
	for(int i=1;i<=n;i++)	//khoi tao cau hinh ban dau
		a[i]=i;
}
void sinh()
{
	// tim phan tu dau tien lam mat tinh ko giam cua day
	int i=n-1;	//bat dau xet tu cuoi day
	while(i>0&&a[i]>a[i+1])	// do i=1 nen khi nao con thoa man 2 dieu kien la: i>0 va a[i]>a[i+1] thi i--
		i--;
	if(i==0) stop=1;	// neu xet den i=0 roi thi stop = 1 de dung while trong ham hoanvi()
	else
	{
		int k=n;	// gan gia tri k=n
		while(a[i]>a[k])	// khi nao a[i] con lon hon a[k] thi k--
			k--;
		swap(a[k],a[i]);	// doi cho a[i] cho a[k]
		int c=n,r=i+1;	// gan c=n va r=i+1
		// dao lai mang tu vi tri i+1 den n
		while(r<c)	// khi nao r con nho hon c thi
		{
			swap(a[c],a[r]);	// doi cho a[c] va a[r]		5 8 6 2 3 ----> 5 8 6 3 2 ------> 6 2 3 5 8 -----> 
			r++;c--;	
		}
	}
}
void in()
{
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}
void hoanvi()
{
	do
	{
		in();	// in ra hoan vi hien tai 
		sinh();
	}
	while(!stop);	// neu stop =1 thi dung vong while
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		khoitao();
		hoanvi();
		stop=0;
		cout<<endl;
	}
}
