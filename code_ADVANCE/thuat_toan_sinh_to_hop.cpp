#include <iostream>
using namespace std;
int n , a[100] , stop = 0 , k;
void in()
{
	for(int i = 1 ; i <= k ; i++)
		cout << a[i];
	cout << " ";
}
void sinh()
{
	int i = k;	// Gan i=k
	while(a[i] == n - k + i)	// Khi nao a[i] con bang n-k+i thi i--
	{
		i--;
	}
	if(i == 0)	// neu i=0 thi day da la to hop cuoi cung roi, gan stop =1 de dung vong lap
	{
		stop = 1;
	}
	else
	{
		a[i]++;	// nguoc lai neu i ko =0 thi a[i] ++
	}
	int p = a[i];	// gan p=a[i]
	while(i <= k) 
		a[i++] = p++;	// tu i den k moi phan tu deu tang len 1 don vi
}
void tohop()
{
	do
	{
		in();	// in ra cau hinh hien tai cua day
		sinh();	
	}
	while(stop == 0);
}
int main()
{
	cin >> n >> k;		// nhap vao n ptu cua day va k la tap con cua n ptu ban dau
	for(int i = 1 ; i <= k ; i++)
		a[i] = i;
	tohop();
}
/*
Buoc 1: Khoi tao cau hinh ban dau
Buoc 2: Xet day tu cuoi len dau, tim phan tu thu i dau tien khong thoa man la gioi han tren: a[i]=n-k+i
Neu khong tim duoc, ket thuc qua trinh sinh
Buoc 3: Tang phan tu i len 1 don vi va tu phan tu i toan bo phan tu sau no co dang a[i+1] = a[i] +1 cho 
den phan tu cuoi. In ra cau hinh va quay lai buoc 2
*/
