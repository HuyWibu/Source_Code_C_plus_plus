#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a,b,s1[100],s2[100],tmp;
		int x=0, y=0;
		getline(cin,a);
		getline(cin,b);
		// tach tu xau a vao s1
		for(int i=0 ; i<a.size() ; i++)
		{
			if(a[i]!=' ')	// neu a[i] ma con khac khoang trang thi xau tmp se cong bang a[i]
			{
				tmp+=a[i];
			}
			else
			{
				if(tmp!="")	// neu tmp khac rong "" thi xau s tai x luc nay se duoc gan bang tmp
				{
					s1[x++]=tmp;
					tmp="";		// gan xong s[x] thi cho x++ roi tmp gan bang rong ""
				}
			}
		}
		if(tmp!="")
		{
			s1[x++]=tmp;
			tmp="";
		}
		// tach tu tuong tu voi xau b vao s2
		for(int i=0 ; i<b.size() ; i++)
		{
			if(b[i]!=' ')
			{
				tmp+=b[i];
			}
			else
			{
				if(tmp!="")
				{
					s2[y++]=tmp;
					tmp="";
				}
			}
		}
		if(tmp!="")
		{
			s2[y++]=tmp;
		}
		// so sanh lan luot cac tu cua xau 2 vs xau 1 
		for(int i=0 ; i<y ; i++)	// bat dau so sanh tu i=0 cua xau 2 voi xau 1
		{
			for(int j=0 ; j<x ; j++)
			{
				if(s1[j]==s2[i])
				{
					s1[j][0]='#';		// neu bang nhau gan ky tu dau tien cua xau s1[j] ='*'
				}
			}
		}
		// loai bo trung nhau trong xau 1 truoc khi in
		for(int i=0 ; i<x-1 ; i++)
		{
			for(int j=i+1 ; j<x ; j++)
			{
				if(s1[i]==s1[j])
				{
					s1[j][0]='#';			// neu phat hien trung nhau thi gan phan tu dau tien cua s[j]='#'
				}
			}
		}
		sort(s1,s1+x);		// do luc nay xau s1 khong co khoang trang nen minh se sap xep lai xau cho dung thu tu tu dien
		// luu y : ham sort co trong thu vien algorithm
		for(int i=0 ; i<x ; i++)
		{
			if(s1[i][0]!='#')
			{
				cout<<s1[i]<<" ";
			}
		}
		cout<<endl;
	}
}
