//Phan 1: khai bao viec su dung thu vien
#include <iostream>
#include <cmath>
using namespace std;
//Phan 2: mo ta cac ham su dung trong chuong trinh
//Ham kiem tra n co la nguyen to hay khong
bool Test_ngto(long n) { 
	if(n<2) return 0;//so 0, 1 khong la nguyen to
	long p = sqrt(n); //p la can bac hai cua n
	for( long i=2; i<=p; i++) { //duyet cac so i tu 2 den p
		if(n%i==0) //neu n chia het cho i
			return false; //ket luan khong la nguyen to
	}
	return true;//ket luan la nguyen to
} 
//Ham kiem tra so dao cua n co la nguyen to?
bool Test_dao(long n) {
	long p= 0; //goi p la so dao
	while(n!=0) { //lap khi nao n van khac 0
		long du=n%10; //lay chu so cuoi cung
		n=n/10; //giam n di 10
		p = p*10 + du; //lay so dao
	}
	return (Test_ngto(p));//tra lai ket qua
} 
//Ham kiem tra tong cac chu so co la nguyen to
bool Test_tong(long n) {
	long s =0; //goi s la tong cac chu so
	while(n!=0) { //lap khi n van khac 0
		long du = n%10; //lay chu so cuoi cung
		n = n/10;//giam n di 10 lan
		s = s+ du; //cong don vao s
	}
	return(Test_ngto(s));//tra lai ket qua
}
//Ham kiem tra tat ca cac chu so cua k co la nguyen to?
bool Test_chuso(long n) {	
	while(n!=0) { //lap khi n khac 0
		long du = n%10; //lay chu so cuoi cung
		n = n/10;//giam n 10 lan
		if(Test_ngto(du)==false) //neu phat hien mot chu so
			return false;//tra lai false
	}
	return(true);//tra lai true
} 
//Mot cach toi uu hon
bool Test(long n) {
	if(Test_ngto(n)==false) 
		return false;
	long p = 0; //goi p la so dao cua so n
	long s = 0;//goi s la tong cac chu so cua n
	while(n!=0) { //lap khi nao n van khac 0
		long du = n%10; //lay chu so cuoi cung
		n = n/10; //giam n 10 lan
		if(Test_ngto(du)==false) //neu du khong la nguyen to
			return false; //khong la nghiem
		p = p *10 + du;//thanh lap so dao
		s = s + du; //tinh tong cac chu so
	}
	return(Test_ngto(p) && Test_ngto(s));
}

//Phan 3: chuong trinh chinh
int main(void){ 
	int N; cin>>N; //so chu so N
	long L = pow(10, N-1) +1;//can duoi
	long H = pow(10, N) - 1; //can tren
	for(long k=L; k<=H; k+=2) 
		if(Test_ngto(k) && Test_dao(k) && Test_tong(k) && Test_chuso(k)) 
			cout<<k<<" ";
	for(long k=L; k<=H; k+=2) {
		if(Test(k)) cout<<k<<" ";
	}
}
