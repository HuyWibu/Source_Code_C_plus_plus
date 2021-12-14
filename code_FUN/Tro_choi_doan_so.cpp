#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	// lenh lay random 1 so ngau nhien khac nhau
	while(true)
	{
		int somay=1+rand()%100;
		cout<<"Chuong Trinh Choi Game Doan So!!\n";
		cout<<"May da doan so [1..100]!! Moi ban doan:\n";
		int solandoan=0;
		bool iswin=false;
		do
		{
			int songuoi;	// 1 2 4 6  7 10
			cin>>songuoi;
			solandoan++;
			cout<<"Ban doan lan thu "<<solandoan<<endl;
			if(songuoi==somay)
			{
				cout<<"Ha ha ban dinh that!!!, so may = "<<somay<<endl;
				iswin=true;
				break; // thang va ngung vong lap
			}
			else if(songuoi>somay)
			{
				cout<<"Ban doan sai, so nguoi>so may"<<endl;
			}
			else
			{
				cout<<"Ban doan sai, so nguoi<so may"<<endl;
			}
			if(solandoan>=7)
				break;
		}while(true);
		if(iswin!=true)
		{
			cout<<"GAME OVER\n";
			cout<<"So cua may="<<somay;
		}
		cout<<"Choi tiep khong ban eyyyy!! "<<"Y/N?\n";
		char c;
		cin>>c;
		if(c=='N')
			break;
	}
	cout<<"GOOD BYE!!!";
	return 0;
}
