#include<iostream>
using namespace std;
void reverse(int arr[], int l, int r)
{
	for (int i = l; i <= r; i++)
	{
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[r];
		arr[r] = temp;
		r--;
	}
}
/*
void rotate(int arr[],int l,int r, int d)
{
	
	
}*/

int main()
{
	int arr[10],n=0;
	cout << "\n enter the array elements: ";
	for (int i = 0; ; i++)
	{
		cin >> arr[i];
		n += 1;
		if (arr[i] == 999)
		{
			n = n - 1;
			break;
		}
	}
	int d = 0;
	cout << " \n enter the no. of rotations: ";
	cin >> d;
	d = d % n;
	reverse(arr, 0, d - 1);
	reverse(arr, d, n-1);

	reverse(arr, 0, n-1);

	cout << "\nafter rotating: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}