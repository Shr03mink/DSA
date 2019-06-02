#include<iostream>
#include<algorithm>
using namespace std;

int part(int a[],int l,int h){

   // int pivot_idx=h;
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<a[h]){
            i++;
           // cout<<"swap: "<<a[i]<<" "<<a[j]<<endl;
            swap(a[i],a[j]);
           // cout<<"\ttest";
        }
    }
     //cout<<"swap: "<<a[i+1]<<" "<<a[h]<<endl;
    swap(a[i+1],a[h]);
    return i+1;
}

void quicksort(int a[],int l,int h){
    
    if(l<h){
        int p=part(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}




/*
int partition(int a[],int l,int h){
    int pivot_idx=h;
    for(int i=0;i<h;i++)
    {
if(a[i]>a[pivot_idx]&&pivot_idx>i)
{
   int temp=a[i];
a[i]=a[pivot_idx];
a[pivot_idx]=temp;
pivot_idx=i;
 }
}
}
*/

int main()
{
    
int arr[11],n=0,d=0;
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
   quicksort(arr,0,n-1);
//int p=part(arr,0,n-1);
    for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

   /* int n=0,a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
		cout << a[i] << " ";
*/
}