#include<iostream>
#include<array>
using namespace std;
void counted(int arr[], int l, int r)
{

	int mid=0;
	mid = l + ((r - l) / 2);

	if (mid == 0)
	{
		if (arr[mid] < arr[mid + 1])
			cout <<"min element is: "<< arr[mid];
		else
			cout << "min element is: " << arr[mid+1];
	}

	else
	{
		if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
		{

			cout << arr[mid];


		}
		else if (arr[mid] > arr[r])
		{
			counted(arr, mid + 1, r);

		}
		else
			counted(arr, l, mid - 1);
	}



	// return count;
}
int main()
{
	int n = 0, count = 0;
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
	int l = 0, r = 0;
	/*int min = arr[0];
	for (int i = 1; i < n; i++)
	{

		if (min > arr[i])
			min = arr[i];
	}*/
	//cout << min << endl;
	//int c =
	//cout << endl << " enter the lower and upper limits:";
	//cin >> l >> r;
	counted(arr, 0, n-1);
	//cout << c;

}