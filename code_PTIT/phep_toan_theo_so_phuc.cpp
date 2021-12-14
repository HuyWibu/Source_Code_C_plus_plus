#include<bits/stdc++.h>
using namespace std;

struct SoPhuc{
	int thuc,ao;
	void in(){
		cout<< thuc << " + "<< ao<<"i";
	}
};

SoPhuc binh_phuong_tong(SoPhuc &a, SoPhuc &b){
	SoPhuc c;
	c.thuc = (a.thuc + b.thuc)*(a.thuc + b.thuc) - (a.ao + b.ao)*(a.ao + b.ao);
	c.ao = 2*(a.thuc + b.thuc)*(a.ao + b.ao);
	return c;
}
void hien_thi(SoPhuc a){
	a.in();
}
int main() {
	int t; cin >> t;
	while(t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
// 2
// 1 2 3 4
// 2 3 4 5