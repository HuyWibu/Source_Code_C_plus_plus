#include <iostream>
using namespace std;
int minSwap(int a[], int n, int k)
{											// 7 5 
    int dem = 0;							// 2  3  4  7  5  8  10
    for (int i = 0; i < n; i++)
        if (a[i] <= k)
            dem++;		// count =3
    int loai = 0;
    for (int i = 0; i < dem; i++)
        if (a[i] > k)
            loai++;			// loai =2
    int tmp = loai;
    for (int i = 0, j = dem; j < n; j++, i++)
    {
        if (a[i] > k)
            loai--;
        if (a[j] > k)
            loai++;
        if(tmp<loai)
        {
        	tmp=tmp;
		}
		else
		{
			tmp=loai;
		}
//        tmp = (tmp < loai) ? tmp : loai;
    }
    return tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << minSwap(a, n, k) << endl;
    }
}
