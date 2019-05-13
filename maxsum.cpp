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
	int sum = 0,cur=0,max=0;
	
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr.at(i);
		cur= cur + (i * arr.at(i));
	}
	for (int j = 1; j < n; j++)
	{
		cur = cur + sum - n * arr.at(n - j);
		if (cur > max)
			max = cur;
	}
	cout<<"\n maximum sum: ";
	cout << max;

}