#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

main()
{
	 string s,q,r,t;
	 cout<<"Anh muon biet gi??\n";	// Hom nay la ngay gi
	 cout<<endl;
	 getline(cin,s); cout<<endl;	
	 cout<<"Hom nay la 20/10, ngay gi nho ???\n";	// Do may biet day
	 cout<<endl;
	 getline(cin,q);cout<<endl;
	 cout<<"Em khong nho that ma!!\n";
	 cout<<endl;		// Co moi the ma khong nho , troi oi
	 getline(cin,s);cout<<endl;
	 cout<<"The hom nay la ngay gi ha anh\n";	// hom nay la ngay phu nu viet nam
	 cout<<endl;
	 getline(cin,s);cout<<endl;
	 cout<<"A the a !!\n";// A the lam sao ma a !!!! May co qua gi khong ma a
	 cout<<endl;
	 getline(cin,r);cout<<endl;
	 cout<<"Anh zai nong the nhe!!! Anh doi em xiu !!\n";
	 cout<<endl;
	 getline(cin,t); cout<<endl;
	 cout<<"Da cua anh day a!!\n";
	 cout<<endl;
	 getline(cin,s); cout<<endl;
	 int x=10;
	 while(x<=100)
	 {
	 	cout<<"Dang xu ly: "<<x<<"%\n";
	 	x+=10;
	}
	 cout<<"Chon Yes/No de lay qua anh zai!!!!!\n";
	 cout<<endl;
	 getline(cin,s);
	for(int i=1 ; i<=10 ; i++)
		cout<<endl;
	int i=1;
	while(i<=3)
	{
		if(i==1)
		{
			ifstream file;
			file.open("D:/Hinh1.txt",ios_base::in);
			string line;
			while(!file.eof())
			{
			//	system("color f4");
				getline(file,line);
				cout << line << "\n";
				Sleep(50);
			}
			for(int i=1 ; i<=10 ; i++)
				cout<<endl;
		}
		else if(i==2)
		{
			ifstream file;
			file.open("D:/Hinh2.txt",ios_base::in);
			string line;
			while(!file.eof())
			{
			//	system("color f4");
				getline(file,line);
				cout << line << "\n";
				Sleep(50);
			}
			for(int i=1 ; i<=10 ; i++)
				cout<<endl;
		}
		else
		{
			ifstream file;
			file.open("D:/Hinh3.txt",ios_base::in);
			string line;
			while(!file.eof())
			{
			//	system("color f4");
				getline(file,line);
				cout << line << "\n";
				Sleep(50);
			}
		}
		i++;
	}
}
