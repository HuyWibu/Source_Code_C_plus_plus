#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma_sv;
    string ho_ten;
    string lop;
    string ngay_sinh;
    double gpa;
    bool operator<(const SinhVien other)
    {
        return other.gpa < gpa;
    }
};
string chuan_hoa(string s)
{
    string tmp, a[100], temp;
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    int k = 0;
    while (ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        a[k++] = tmp;
    }
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            temp += a[i];
        else
            temp = temp + " " + a[i];
    }
    return temp;
}
void nhap(SinhVien ds[], int n)
{
    string s = "B20DCCN";
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, ds[i].ho_ten);
        cin >> ds[i].lop;
        cin >> ds[i].ngay_sinh;
        cin >> ds[i].gpa;
        // xu ly ma sinh vien
        if (k < 10)
        {
            int tg = k;
            ds[i].ma_sv = s + "00" + to_string(tg);
        }
        else
        {
            int tg = k;
            ds[i].ma_sv = s + "0" + to_string(tg);
        }
        k++;
        // xu ly ngay sinh

        for (int j = 0; j < ds[i].ngay_sinh.size(); j++)
        {
            if (j == 1 && ds[i].ngay_sinh[j] == '/')
                ds[i].ngay_sinh = "0" + ds[i].ngay_sinh;
            if (j == 4 && ds[i].ngay_sinh[j] == '/')
                ds[i].ngay_sinh.insert(3, "0");
        }

        // chuan hoa ho ten
        ds[i].ho_ten = chuan_hoa(ds[i].ho_ten);
    }
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n);
}
void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].ma_sv << " " << ds[i].ho_ten << " " << ds[i].lop << " " << ds[i].ngay_sinh << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}