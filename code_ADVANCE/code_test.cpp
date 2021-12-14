#include <bits/stdc++.h>
using namespace std;

map<string, string> mp;

class MonHoc
{
    private:
        string ma, ten;
    public:
        friend istream &operator >> (istream &, MonHoc &);
};

istream &operator >> (istream &in, MonHoc &a)
{
    in >> a.ma;
    scanf("\n");
    getline(in, a.ten);
    mp[a.ma] = a.ten;
    return in;
}

class LichThi
{
    private:
        string stt, ten, ma, ngay, gio, nhom, day, month, year, hour, minutes;
        static int dem;
    public:
        friend istream& operator >> (istream&, LichThi&);
        friend ostream& operator << (ostream&, LichThi);
        friend bool operator < (LichThi a, LichThi b);
};

int LichThi::dem = 0;

istream &operator >> (istream &in, LichThi &a)
{
    a.dem++;
    a.stt = "T0" + string(2-to_string(a.dem).size(), '0') + to_string(a.dem);
    string x;
    string token;
    getline(in, x);
    stringstream ss(x);
    int dem = 0;
    while (getline(ss, token, ' '))
    {
        if(dem == 0)
        {
            a.ma = token;
            for(auto it:mp)
            {
                if(it.first == token)
                    a.ten = it.second;
            }
            dem++ ;
        }
        else if(dem == 1)
        {
            a.ngay = token;
            a.day = a.ngay.substr(0,2);
            a.month = a.ngay.substr(3,2);
            a.year = a.ngay.substr(6,4);
            dem++;
        }
        else if(dem == 2)
        {
            a.gio = token;
            a.hour = a.gio.substr(0,2);
            a.minutes = a.gio.substr(3,2);
            dem++;
        }
        else
        {
            a.nhom = token;
            dem++;
        }
    }
    return in;
}

ostream& operator << (ostream& out, LichThi a)
{
    out << a.stt << " " << a.ma << " " << a.ten << " " << a.ngay << " " << a.gio << " ";
    out << a.nhom << endl;
    return out;
}

bool operator < (LichThi a, LichThi b)
{
    if(a.year != b.year)
    {
        return a.year < b.year;
    }
    else
    {
        if(a.month != b.month)
        {
            return a.month < b.month;
        }
        else
        {
            if(a.day != b.day)
            {
                return a.day < a.day;
            }
            else
            {
                if(a.hour != b.hour)
                {
                    return a.hour < b.hour;
                }
                else
                {
                    if(a.minutes != b.minutes)
                    {
                        return a.minutes < a.minutes;
                    }
                    else
                    {
                        return a.ma < b.ma;
                    }
                }
            }
        }
    }
}

void process(MonHoc mh[], int n, LichThi lt[], int m)
{
    sort(lt, lt+m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> mh[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> lt[i];
    }
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++)
    {
        cout << lt[i];
    }
}

// 2 10
// INT1155
// Tin hoc co so 2
// INT1339
// Ngon ngu lap trinh C++
// INT1155 25/11/2021 08:00 01
// INT1155 04/12/2021 08:00 02
// INT1155 04/12/2021 13:30 03
// INT1155 25/11/2021 13:30 04
// INT1155 25/11/2021 15:00 05
// INT1339 25/11/2021 08:00 01
// INT1339 25/11/2021 08:00 02
// INT1339 04/12/2021 13:30 03
// INT1339 04/12/2021 13:30 04
// INT1339 04/12/2021 15:00 05