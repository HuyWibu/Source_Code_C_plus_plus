#include <bits/stdc++.h>
using namespace std;
int check1(string s, int l, int r)
{
	for(int i=l ; i<r-1 ; i++)
	{
		if(s[i]>=s[i+1])
		{
			return 0;
		}
	}
	return 1;
}
int check2(string s, int l, int r)
{

	for(int i=l ; i<r-1 ; i++)
	{
		if(s[i]!=s[i+1])
			return 0;
	}
	return 1;
}
int check3(string s, int l, int r)		//222.55
{
	if (s[0] != s[1] || s[1] != s[2])
        return 0;
    if (s[3] != s[4])
        return 0;
    return 1;
}
int check4(string s, int l, int r)
{
	for(int i=l ; i<r ; i++)
	{
		if(s[i]!='6'&&s[i]!='8')
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s1,s;
		getline(cin,s1);
		int x=s1.length();
		for (int i = 5; i < x; i++)
        {
            if (s1[i] == '.')
                continue;
            s += s1[i];
        }
        int y=s.length();
		if((check1(s,0,y)==1)||check2(s,0,y)==1||check3(s,0,y)==1||check4(s,0,y)==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
