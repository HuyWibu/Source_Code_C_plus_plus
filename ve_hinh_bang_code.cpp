#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

main()
{
	ifstream file;
	file.open("D:/vehinhanhdo.txt",ios_base::in);
	string line;
	while(!file.eof())
	{
		//  system("color f4");
		getline(file,line);
		cout << line << "\n";
		Sleep(80);
	}
}
