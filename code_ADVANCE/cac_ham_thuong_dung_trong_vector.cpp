#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> list;
	int n,k;
	cin >> n >> k;
	int index = 0;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> index;
		list.push_back(index);
	}
	
	// cac ham thuong dung trong vector
	
//	list.push_back(5); ---> day 1 phan tu 5 vao sau vetor

//	list.pop_back();   ---> xoa di phan tu cuoi cung cua vector

//	list.front();	   ---> lay ra phan tu dau tien cua vector

//	list.clear(); 	   ---> Xoa toan bo phan tu trong vector

//	list.back();	   ---> Lay ra phan tu cuoi cung trong vector

//	list.at(5);		   ---> Lay ra phan tu thu i cua vector chu y la vector giong mang nen van chay tu 0
	
//	list.size();       ---> Lay do dai cua vector

//	list.empty();	   ---> Kiem tra xem phan tu co trong hay ko

//	list.resize(n);    ---> Chinh sua lai do dai cua vector gom n phan tu
	
//	advance(it,5);     ---> Dich chuyen vi tri con tro len den vi tri so 5

//	list.erase(it , list.end()); 	---> Xoa tu vi tri it den het list

	//code thu bai la xoa tu phan tu thu k den het trong vector
	
	vector<int> :: iterator it = list.begin();
	advance(it , list.size()-k);
	list.erase(it , list.end());
	
	for(vector<int> :: iterator it = list.begin() ; it != list.end() ; it++)
	{
		cout << *it << " ";
	}
	
}
