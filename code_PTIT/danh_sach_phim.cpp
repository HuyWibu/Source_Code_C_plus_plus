#include <bits/stdc++.h>
using namespace std;

map <string, string> mp;
class Dsphim
{
    private:
        string maphim, tentheloai, ngay, tap, matheloai, tenphim;
        string day, month, year;
        static int dem;
    public:
        friend istream& operator >> (istream&, Dsphim&);
        friend ostream& operator << (ostream&, Dsphim);
        string getDay();
        string getMonth();
        string getYear();
        string getTenphim();
        string getTap();
};

int Dsphim::dem = 0;

string Dsphim::getDay()
{
    return this->day;
}

string Dsphim::getMonth()
{
    return this->month;
}

string Dsphim::getYear()
{
    return this->year;
}

string Dsphim::getTenphim()
{
    return this->tenphim;
}

string Dsphim::getTap()
{
    return this->tap;
}

istream& operator >> (istream& in, Dsphim& a)
{
    a.dem++;
    a.maphim = "P" + string(3 - to_string(a.dem).length(), '0') + to_string(a.dem);
    in >> a.matheloai;
    for(auto it : mp)
    {
        if(it.first == a.matheloai)
            a.tentheloai = it.second;
    }
    in >> a.ngay;
    a.day = a.ngay.substr(0, 2);
    a.month = a.ngay.substr(3, 2);
    a.year = a.ngay.substr(6, 4);
    scanf("\n");
    getline(in, a.tenphim);
    in >> a.tap;
    return in;
}

ostream& operator << (ostream& out, Dsphim a)
{
    out << a.maphim << " " << a.tentheloai << " " << a.ngay << " "
    << a.tenphim << " " << a.tap << endl;
    return out;
}

bool cmp(Dsphim a, Dsphim b)
{
    if(a.getYear() == b.getYear())
    {
        if(a.getMonth() == b.getMonth())
        {
            if(a.getDay() == b.getDay())
            {
                if(a.getTenphim() == b.getTenphim())
                {
                    return a.getTap() > b.getTap();
                }
                return a.getTenphim() < b.getTenphim();
            }
            return a.getDay() < b.getDay();
        }
        return a.getMonth() < b.getMonth();
    }
    return a.getYear() < b.getYear();
}


int main()
{   
    int n, m; cin >> n >> m;
    scanf("\n");
    vector<Dsphim> v;
    string s;
    int cnt = 1;
    for(int i=0 ; i<n ; i++)
    {
        string x = "TL" + string(3-to_string(cnt).size(), '0') + to_string(cnt);
        getline(cin, s);
        mp[x] = s;
        cnt ++;
    }

    for(int i=0 ; i<m ; i++)
    {
        Dsphim x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0 ; i<m ; i++)
    {
        cout << v[i];
    }

    return 0;
}

// 2 3
// Hai huoc
// Tinh cam
// TL001
// 25/11/2021
// Phim so 1
// 10
// TL001
// 04/12/2021
// Phim so 2
// 15
// TL002
// 25/11/2021
// Phim so 3
// 5