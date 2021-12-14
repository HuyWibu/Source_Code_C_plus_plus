#include<iostream>
#include<string.h>
using namespace std;
int stt=1;
struct NhanVien {
    string ten, gioitinh, ns, diachi, mst, nkhd;
};
void nhap(NhanVien &a) {
	scanf("\n");
	getline(cin, a.ten);
	getline(cin, a.gioitinh);
	getline(cin, a.ns);
	getline(cin, a.diachi);
	getline(cin, a.mst);
	getline(cin, a.nkhd);
}
void inds(NhanVien a[], int N) {
	for(int i=0; i<N; i++) {
		if(stt + 1 < 10) cout << "0000" << stt+i << " ";
		else cout << "000" << stt+i << " ";
		cout << a[i].ten <<" " << a[i].gioitinh << " " << a[i].ns << " " << a[i].diachi << " " << a[i].mst << " " << a[i].nkhd;
		cout << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

// 3
// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011