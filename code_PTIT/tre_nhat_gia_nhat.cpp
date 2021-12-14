#include <bits/stdc++.h>
using namespace std;
struct nguoi
{
    string ten;
    string sinh;
    int nam_sinh;
    int thang_sinh;
    int ngay_sinh;
    void nhap()
    {
        cin >> ten;
        cin >> sinh;
        nam_sinh = stoi(sinh.substr(6, 4));
        thang_sinh = stoi(sinh.substr(3, 2));
        ngay_sinh = stoi(sinh.substr(0, 2));
    }
    bool operator<(const nguoi other)
    {
        if (nam_sinh < other.nam_sinh)
            return true;
        else if (nam_sinh > other.nam_sinh)
            return false;
        else
        {
            if (thang_sinh < other.thang_sinh)
                return true;
            else if (thang_sinh > other.thang_sinh)
                return false;
            else
            {
                if (ngay_sinh < other.ngay_sinh)
                    return true;
                else if (ngay_sinh > other.ngay_sinh)
                    return false;
            }
        }
    }
};
int main()
{
    int n;
    cin >> n;
    nguoi pp[n];
    for (int i = 0; i < n; i++)
        pp[i].nhap();
    sort(pp, pp + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            cout << pp[i].ten ;
            cout << endl;
        }
        if (i == 0)
            cout << pp[i].ten ;
    }
}