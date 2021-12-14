#include <iostream>
using namespace std;
int n;
int a[1005];
int stop = 0;
void sinh()
{
	// tim phan tu dau tien lam mat tinh tang cua day
	int i = n;
	while(i > 1 && a[i] < a[i-1])			//5  4  3  2  1
	{
		i--;
		break;
	}
	// tim vi tri ptu dau tien trong doan i+1 den n sao cho ptu tai do la lon nhat nhung nho hon a[i]
	int k=n;
	while(a[i] < a[k])
	{
		k--;
	}
	swap(a[i] , a[k]);
	int c = n , r = i + 1;
	while(r<c)
	{
		swap(a[c] , a[r]);
		r++;
		c--;
	}
}
void hoanvi()
{
	do
	{
		sinh();
		for(int i = 1 ; i <= n ; i++)
			cout << a[i] << " ";
	}
	while(stop);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
		}
		hoanvi();
		cout << endl;
	}
}
