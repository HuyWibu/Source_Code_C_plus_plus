#include <iostream>
#include <string>
#include <map>
#include <istream>
#include <ostream>
#include <algorithm>

using namespace std;
#define endl '\n'


map <string, string> sub;

class MonHoc{
    public:
        string id;
        string subject;
    public:
        friend istream& operator >> (istream& in, MonHoc &a) {
            in >> a.id;
            scanf("\n");
            getline(in, a.subject);
            sub[a.id] = a.subject;
            return in;
        }
        friend ostream& operator << (ostream& out, MonHoc a) {
            out << a.id << " " << a.subject << " ";
            return out;
        }
};

class LichThi{
    public:
        string id, MonHoc, date, time, group;
        string ma = "T";
        int day , month, year, hour, minute;
        static int dem;
    public:
        friend istream& operator >> (istream& in, LichThi &a) {
            in >> a.id >> a.date >> a.time >> a.group;
            dem++;
            string k = to_string(dem);
            while(k.length() < 3) {
                k = "0" + k;
            }
            if(a.date[2] != '/') a.date.insert(0, "0");
            if(a.date[5] != '/') a.date.insert(3, "0");
            if(a.time[2] != ':') a.time.insert(0, "0");
            a.ma += k;
            a.day = (a.date[0] - '0') * 10 + a.date[1] - '0';
            a.month = (a.date[3] - '0' ) * 10 + a.date[4] - '0';
            a.year = (((a.date[6] - '0') * 10 + a.date[7] - '0') * 10 + a.date[8] - '0') * 10 + a.date[9] - '0';
            a.hour = (a.time[0] - '0') * 10 + a.time[1] - '0';
            a.minute = (a.time[3] - '0') * 10 + a.time[4] - '0';

            return in;
        }
        friend ostream& operator << (ostream& out, LichThi a) {
            // out << a.day << a.month << a.year << endl;
            out << a.ma << " " << a.id << " " << sub[a.id] << " " << a.date << " " << a.time << " " << a.group << endl;
            return out;
        }
};

int LichThi::dem = 0;

bool cmp (LichThi a, LichThi b ){
    if(a.year == b.year && a.month == b.month && a.day == b.day){
        if(a.hour == b.hour && a.minute == b.minute)
            return a.id < b.id;
    }
    if(a.year == b.year && a.month == b.month && a.day == b.day){
        if(a.hour == b.hour) return a.minute < b.minute;
    }
    if(a.year == b.year && a.month == b.month && a.day == b.day){
        return a.hour < b.hour;
    }
    if(a.year == b.year && a.month == b.month) return a.day < b.day;
    if(a.year == b.year ) return a.month < b.month;
    return a.year < b.year;
}

void process(MonHoc mh[100], int n, LichThi lt[], int m) {
    sort(lt, lt + m, cmp);
}

int main () {
    int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}