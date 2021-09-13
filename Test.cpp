#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	int i = n-1;
	int c = n , r = i + 1;
		while(r < c)
		{
			swap(a[c] , a[r]);
			r++;
			c--;
		}
	for(int i = 1 ; i <= n ; i++)
		cout << a[i] << " ";
}
