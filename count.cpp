#include<iostream>
#include<array>
using namespace std;
void counted(int arr[], int l, int r, int min)
{
	
		int mid; 
		mid = l+((r-l)/2);
		
		
			if (arr[mid] == min && arr[mid]<arr[mid+1] &&arr[mid]<arr[mid-1])
			{

				cout<< mid;


			}
			else if (arr[mid] > arr[r])
			{
				counted(arr, mid + 1, r, min);

			}
			else
				counted(arr, l, mid - 1, min);
		
		
	
	
  // return count;
}
int main()
{
	int n = 0,count=0;
	int arr[10];
	cout << " enter the array: ";
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
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << endl;
	//int c =
	counted(arr, 0, n-1, min);
	//cout << c;
	
}