#include<iostream>
using namespace std;
void shifting(int* arr, int n, int d)
{
	int temp[7];
	cout << "\n enter the no. of rotations:";
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		temp[i] = arr[i];

	}
	for (int i = d; i < n; i++)
	{
		arr[i - d] = arr[i];
	}
	for (int i = d; i < n; i++)
	{
		arr[i] = temp[i - d];
	}
	cout << "\n after rotation: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}
void rotation(int* arr, int n, int d)
{
	int temp = 0,j=0;
	while (j < d)
	{
		temp = arr[0];
		for (int i = 1; i < n; i++)
			arr[i - 1] = arr[i];
		arr[n] = temp;
		j++;
	}
	cout << "\n after rotation: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[7],n=0,d=0;
	cout << "\n enter the array of numbers: (enter 999 at the end of the sequence)";
	for (int i = 0; ;i++)
	{
		cin >> arr[i];
		n = n + 1;
		if (arr[i] == 999)
		{
			n = n - 1;
			break;
		}
	}
	shifting(arr, n, d);
	rotation(arr, n, d);
	}