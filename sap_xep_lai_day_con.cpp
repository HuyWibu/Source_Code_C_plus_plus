#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+2], b[n+2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];		// khai bao mang b de sao chep lai cac phan tu cua mang a
        }
        sort(b, b + n);			// sap xep mang b
        int left = 0, right = 0; 	// gan left va right =0 
        for (int i = 0; i < n; i++)
            if (b[i] != a[i])		// neu tai vi tri i da duoc sap xep cua mang b ma ptu tai b khac ptu tai a 
            {						// thi do chinh la vtri chan ben trai ta can tim
                left = i + 1;		// left=i+1 sau do break dung vong lap
                break;
            }
        for (int i = n - 1; i >= 0; i--)
            if (b[i] != a[i])
            {
                right = i + 1;	// tuong tu vs right
                break;
            }
        cout << left << " " << right << endl;
    }
}
