#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll UCLN(ll a, ll b)
{
    if(b==0) return a;
    return UCLN(b, a%b);
}

class PhanSo{
    private:
        ll tu,mau;
    public:
        PhanSo(ll, ll); // constructor
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutgon();
};

PhanSo::PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> (istream& in, PhanSo& a){
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}

void PhanSo::rutgon(){
    ll x = UCLN(this->tu, this->mau);
    this->tu/=x;
    this->mau/=x;
}

int main() {
	PhanSo p(1,1); // constructor
	cin >> p;   // operator overload >>
	p.rutgon();
	cout << p;  // operator overload <<
	return 0;
}