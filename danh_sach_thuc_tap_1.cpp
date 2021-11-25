#include <bits/stdc++.h>
using namespace std;
struct sv
{
    int stt;
    string ma_sv;
    string ho_ten;
    string lop;
    string email;
    string doanh_nghiep;
    void nhap()
    {
        cin >> ma_sv;
        scanf("\n");
        getline(cin, ho_ten);
        getline(cin, lop);
        getline(cin, email);
        cin >> doanh_nghiep;
    }
    bool operator<(sv other)
    {
        return ho_ten < other.ho_ten;
    }
};
int main()
{
    int n;
    cin >> n;
    sv a[n + 2];
    sv b[n + 2];
    for (int i = 1; i <= n; i++)
    {
        a[i].stt = i;
        a[i].nhap();
    }
    int Q;
    cin >> Q;
    sort(a+1, a+1 + n);
    while (Q--)
    {
        string dn;
        cin >> dn;
        for (int i = 1; i <= n; i++)
        {
            if (dn == a[i].doanh_nghiep)
            {
                cout << a[i].stt << " " << a[i].ma_sv << " " << a[i].ho_ten << " " << a[i].lop << " ";
                cout<< a[i].email << " ";
                cout << a[i].doanh_nghiep << endl;
            }
        }
    }
}