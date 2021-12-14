#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	// Nhap do dai cua mang
	int n;
	cin>>n;
	vector<int> list;		// khai vao vector list , ta coi list nhu 1 mang binh thuong
	int index;
	
	// Nhap mang
	
	for(int i = 0 ; i < n ; i++)
	{
		cin >> index;
		list.push_back(index);		// ham push_back (value) dung de day gia tri vao trong list
	}
	
	// Sap xep cac phan tu cua mang
	
	int inx;
	for(int i = 0 ; i<list.size()-1 ; i++)		// list.size() la ham lay do dai cua list
	{
		inx=0;
		for(int j = i + 1 ; j < list.size() ; j++)
		{
			if(list[i] > list[j])
			{
				swap(list[i] , list[j]);		// dung ham binh thuong nhu 1 mang binh thuong
			}
		}
	}
	
	// Xuat mang bang cach su dung bien con tro
	
	for(vector<int> :: iterator it = list.begin() ; it != list.end() ; it++)	// iterator giong nhu 1 con tro tro den 1 phan tu nao do ben trong list
	{
		cout << *it << " ";			// it duoc khai bao giong nhu la 1 con tro 
	}
}
