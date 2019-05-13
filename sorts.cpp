#include <iostream>
#include<vector>
using namespace std;
void bubble(int *arr,int n)
{
	bool swapped = true;
	
	do
	{
		swapped = false;
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
	cout << "\n Sorted order using BUBBLE SORT: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

}
void selection(int *sel,int n)
{

	for (int i = 0; i < n; i++)
	{
		int min = 0;
		min = sel[i];
		int j, k = 0;
		for (j = i; j < n; j++)
		{
			if (sel[j] <= min)
			{
				min = sel[j];
				k = j;
			}

		}

		int temp = 0;
		temp = min;
		min = sel[i];
		sel[i] = temp;
		sel[k] = min;


	}
	cout << "\n sorted order using SELECTION SORT\n";
	for (int p = 0; p < n; p++)
	{
		cout << sel[p] << " ";
	}
}
void insertion(int *arr,int n)
{
	int flag[10], index;
	for (int i = 0; i < n;i++)
	{
		flag[i] = 0;
	}
	flag[0] = 1;
	index = 0;
	for (int i = 1; i < n && flag[i] == 0; i++)
	{
		int temp = arr[i];
		arr[i] = 0;
		int j=index,k=0;
		while(j>=0)
		{
			if (arr[j] > temp)
			{
				int x = 0;
					x= arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = 0;
				k = j; 
				
			}
			
			
			j--;
		}
		arr[k] = temp;
		flag[i] = 1;
		index += 1;
		
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
int main()
{
	vector<int> v;
	int ele = 0;
	cout << "Selection sort  \n" << "enter the elements (enter 999 to end the stream of numbers):";
	int size = 0;
	for (int i = 0;; i++)
	{
		cin >> ele;
		{
			if (ele == 999)
				break;
		}
		v.push_back(ele);
		size += 1;
		
	}
	v.shrink_to_fit();
	int* arr = &v[0];
	//bubble(arr,size);
	//selection(arr,size);
	insertion(arr, size);


	
}