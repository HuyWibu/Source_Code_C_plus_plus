#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma_sv;
    string ho_ten;
    string lop;
    string ngay_sinh;
    double gpa;
};
string chuan_hoa(string x)
{
    for(int i=0 ; i<x.size() ; i++)
    {
        x[i]=tolower(x[i]);
    }
    stringstream ss(x);
    string tmp,s[100];
    int k=0;
    while(ss>>tmp)
    {
        tmp[0]=toupper(tmp[0]);
        s[k++]=tmp;
    }
    string temp="";
    for(int i=0  ; i<k ; i++)
	{
		if(i==0)
		{
			temp+=s[i];
		}
		else	
			temp= temp + " " + s[i];
	}
    return temp;
}
void nhap(SinhVien ds[], int n)
{

    int k = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        string s = "B20DCCN";
        if (k < 10)
        {
            string tg = to_string(k);
            s = s + "00" + tg;
        }
        else
        {
            string tg = to_string(k);
            s = s + "0" + tg;
        }
        getline(cin, ds[i].ho_ten);
        scanf("\n");
        cin >> ds[i].lop;
        cin >> ds[i].ngay_sinh;
        cin >> ds[i].gpa;
        ds[i].ma_sv = s;
        ds[i].ho_ten=chuan_hoa(ds[i].ho_ten);
        k++;
    }
}
void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ds[i].ngay_sinh.size(); j++)
        {
            if (j == 1 && ds[i].ngay_sinh[j] == '/')
                ds[i].ngay_sinh = "0" + ds[i].ngay_sinh;
            if (j == 4 && ds[i].ngay_sinh[j] == '/')
                ds[i].ngay_sinh.insert(3, "0");
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].ma_sv << " " << ds[i].ho_ten << " " << ds[i].lop << " " << ds[i].ngay_sinh;
        cout << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}