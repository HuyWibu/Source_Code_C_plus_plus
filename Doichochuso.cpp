#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void test(string s)			// Vi du: 9 2 5 2 6 7 5 5 5 ----> 9 2 5 2 6 5 7 5 5
{
	int vtri=s.size()-2;		// vtri = do dai-2 ,vi vi du: do dai xau =9 phan tu cuoi cung la 8 ma minh muon xet tai vtri 7 va 8
	while(vtri>=0&&s[vtri]<=s[vtri+1])	// tim vi tri ma tai do chu so tai vi tri do khong nho hon hoac bang chu so dung sau no!!!
	{
		vtri--;			// khong tim thay thi i--
	}
	if(vtri<0) cout<<"-1\n";		// neu den i<0 thi so nay luon tang ----> in ra -1
	else
	{
		int xet=s.size()-1;			// so sanh chu so tai vi tri va xet
		while(s[vtri]<=s[xet] || s[vtri]>s[xet]&&s[xet]==s[xet-1])	// neu s[i]<=s[j] thi bo qua (j--) do neu doi thi se thanh so lon hon mat!!!
		{							//	hoac s[i]>s[j] va them dkien s[j]==s[j-1] nhu vi du tren(vi du 1755 (1557) ko lon hon dc 1575)
			xet--;					 
		}
		swap(s[vtri],s[xet]);
		if(s[0]=='0')
		{
			cout<<"-1\n";
		}
		else
			cout<<s<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		test(s);
	}
}
