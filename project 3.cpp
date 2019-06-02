 
#include<iostream>
#include<array>
	using namespace std;
	int main()
	{
		int n = 0;
		cout << " enter array elements:";
		array<int, 10> arr;
		for (int i = 0; ; i++)
		{
			cin >> arr.at(i);
			n = n + 1;
			if (arr.at(i) == 999)
			{
				n = n - 1;
				break;
			}
		}
		int sum = 0, cur = 0, maxi = 0,temp;

		for (int i = 0; i < n; i++)
		{
			sum = sum + arr.at(i);
			cur = cur + (i * arr.at(i));
		}
		maxi = cur;
		for (int j = 1; j < n; j++)
		{
			temp = cur + sum - n * arr.at(n - j);
			cur = temp;
			if (maxi > temp)
				maxi = max(maxi, temp);
		}
		cout << "\n maximum sum: ";
		cout << maxi;

	}
