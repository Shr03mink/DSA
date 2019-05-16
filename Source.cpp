#include<iostream>
#include<array>
using namespace std;

void rotation(int arr[], int n, int d)
{
	int temp1 = 0, j = 0;
	int temp[20];

	for (int i = 0; i < n; i++)
	{
		temp[i] = arr[i];
		temp[n + i] = arr[i];
	}



	/* while (j < d)
	{
		temp1 = temp[0];

		for (int i = d; i < n+d; i++)
		{
			//temp[i - 1] = temp[i];
		}
			//temp[n-1] = temp1;
		j++;
	}
    */

	cout << "\n after rotation: ";
	for (int i = d; i < n+d; i++)
		cout << temp[i] << " ";
}

/*
void rotation(int* arr, int n, int d)
{
	int temp = 0, j = 0;
	while (j < d)
	{
		temp = 0;
		temp = arr[0];
		for (int i = 1; i <= n; i++)
			arr[i - 1] = arr[i];
		arr[n] = temp;
		j++;
	}
	cout << "\n after rotation: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}*/

int main()
{
	int arr[7], n = 0, d = 0;
	cout << "\n enter the array of numbers: (enter 999 at the end of the sequence)";
	for (int i = 0; ; i++)
	{
		cin >> arr[i];
		
		n = n + 1;
		if (arr[i] == 999)
		{
			n = n - 1;
			break;
		}
	}
	
	cout << " enter the no. of rotations:";
	cin >> d;
	d = d % n;
	rotation(arr, n , d);
}