#include <bits/stdc++.h>
using namespace std;
string tong_hai_so_nguyen_lon(string a, string b, int max)
{
    string sum = "";
    int nho = 0;
    for (int i = max - 1; i >= 0; i--)
    {
        int k = (a[i] - '0') + (b[i] - '0') + nho;
        nho = 0;
        if (k < 10)
        {
            sum = char(k + '0') + sum;
        }
        else
        {
            k %= 10;
            sum = char(k + '0') + sum;
            nho = 1;
        }
    }
    if (nho == 1)
        sum = "1" + sum;
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, min1, min2, max1, max2, min, max;
        cin >> s1 >> s2;
        int len_max = s1.size();
        if (len_max < s2.size())
            len_max = s2.size();
        if (len_max == s1.size() && len_max != s2.size())
        {
            int k = len_max - s2.size();
            for (int i = 0; i < k; i++)
            {
                s2 = "0" + s2;
            }
        }
        if (len_max == s2.size() && len_max != s1.size())
        {
            int k = len_max - s1.size();
            for (int i = 0; i < k; i++)
            {
                s1 = "0" + s1;
            }
        }
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]=='6')
                s1[i]='5';
            min1=min1+s1[i];
            if(s1[i]=='5')
                s1[i]='6';
            max1=max1+s1[i];
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if(s2[i]=='6')
                s2[i]='5';
            min2=min2+s2[i];
            if(s2[i]=='5')
                s2[i]='6';
            max2=max2+s2[i];
        }
        min = tong_hai_so_nguyen_lon(min1, min2, len_max);
        max = tong_hai_so_nguyen_lon(max1, max2, len_max);

        cout << min << " " << max << endl;
    }
}