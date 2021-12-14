#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct diem
{
    double x;
    double y;
};
void nhap(diem &a)
{
    cin >> a.x;
    cin >> a.y;
}
void Solution(diem A, diem B, diem C)
{
    // tinh AB, BC, AC
    double a = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
    double b = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
    double c = sqrt((C.x - A.x) * (C.x - A.x) + (C.y - A.y) * (C.y - A.y));
    // dk ton tai tam giac ABC
    if (a + b <= c || b + c <= a || a + c <= b || abs(a - b) >= c || abs(c - b) >= a || abs(c - a) >= b)
    {
        cout << "INVALID" << endl;
    }
    else
    {
        // tinh dien tich tam giac ABC
        double S = (1.0 / 4) * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
        // tinh ban kinh duong tron NTTG
        double R = (a * b * c) / (4 * S);
        // tinh dien tich hinh tron NTTG
        double S_tron = PI * R * R;
        cout << fixed << setprecision(3) << S_tron << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        diem A, B, C;
        nhap(A);
        nhap(B);
        nhap(C);
        Solution(A, B, C);
    }
}