#include<iostream>
#include<array>
using namespace std;

int main()
{
	int n = 0;
	cout << " enter  array: ";
	array <int, 10> arr;
	for (int i = 0;; i++)
	{
		cin >> arr.at(i);
		n = n + 1;
		if (arr.at(i) == 999)
		{
			n = n - 1;
			break;
		}
	}
	
	cout << "\nno. of elements: "<<n;
	cout << "\nenter the sum of elements you want to search:";
	int x = 0;
	cin >> x;
	cout<<" the pairs having sum "<<x<<" are: ";
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n && j != i; j++)
		{
			sum = arr.at(i) + arr.at(j);
			if (sum == x)
				cout << "(" << arr.at(i) << "," << arr.at(j) << ") ,  ";
		}
	}
}