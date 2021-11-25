#include <bits/stdc++.h>
using namespace std;
struct thoi_gian
{
    int gio, phut, giay;
};
bool cmp(thoi_gian a, thoi_gian b)
{
    if (a.gio < b.gio)
        return true;
    else if (a.gio > b.gio)
        return false;
    else
    {
        if (a.phut < b.phut)
            return true;
        else if (a.phut > b.phut)
            return false;
        else
            {
                if (a.giay <  b.giay)
                    return true;
                else if(a.giay > b.giay)
                    return false;
                else
                    return true;
            }
    }
}
int main()
{
    int n;
    cin >> n;
    thoi_gian ds[5005];
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
    }
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
    }
}