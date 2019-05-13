#include <iostream>
#include <array>
using namespace std;
void merge(int arr[], int l, int r, int m)
{
	
	int size1, size2;
	int k = m - l + 1;
	int s = r - m;  
	int le[10];
	int ri[10];

	for (int i = 0; i < k; i++)
	{
		le[i]=arr[i + l];
	}
	//int k =  sizeof(le) / sizeof(le[0]);
	for (int j = 0; j < s; j++)
	{
		ri[j]=arr[j + m + 1];
	}
	//int s = sizeof(ri)/sizeof(ri[0]);
	int i = 0, j = 0, p = 0;
	while (i < k && j < s)
	{
		if (le[i] <= ri[j])
		{
			arr[p] = le[i];
			i++;
			
		}
		else if (le[i] > ri[j])
		{
			arr[p] = ri[j];
			j++;
			
		}
		p++;
	}
	while (i < k)
	{
		arr[p] = le[i];
		i++;
		p++;
	}
	while (j < s)
	{
		arr[p] = ri[j];
		j++;
		p++;
	}
	cout << "\n after sorting: ";
	for (int q = 0; q < p; q++)
	{
		cout << arr[q] << " ";
	}
}
void mergesort(int arr[], int l, int r)
{
	
	if (l < r)
	{
		int m = (l + r) / 2;
		mergesort(arr, 0, m);
		mergesort(arr, m + 1, r);
		merge(arr, l, r, m);
	}
	
}
int partition(int arr[], int l, int u)
{
	int v, i, j, temp;
	v = arr[l];
	i = l;
	j = u + 1;
	do
	{
		do
		{
			i++;
		} while (arr[i] < v && i <= u);
		do
		{
			j--;
		} while (v < arr[j]);
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		

	} while (i < j);
	arr[l] = arr[j];
	arr[j] = v;
	return j;
}
void quicksort(int arr[], int l, int u)
{
	int j, k;
	if (l < u)
	{
		j = partition(arr, l, u );

		quicksort(arr, l, j - 1);
		quicksort(arr, j + 1, u);

	}
	
}


int main()
{
	int arr[10];
	int n = 0, ele;
	cout << " enter the array: ";
	for (int i = 0;; i++)
	{
		
		cin >> arr[i];
		
		n+=1;
		if (arr[i] == 999)
		{
			n = n - 1;
			break;
		}
		
	}
	//n = sizeof(arr) / sizeof(arr[0]);
//	int* arr = &v[0];
	//mergesort(arr, 0, n-1);
	quicksort(arr, 0, n - 1);
	cout << "\n after sorting: ";
	for (int q = 0; q < n; q++)
	{
		cout << arr[q] << " ";
	}
	
}
