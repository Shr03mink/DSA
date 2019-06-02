//https://www.geeksforgeeks.org/move-zeroes-end-array-set-2-using-single-traversal/

#include <iostream>
#include <algorithm>
using namespace std;

void part(int a[],int l,int h){

   int pivot=0;
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]!=0)
        {
            i++;
          
            swap(a[i],a[j]);
           
        }
    }
    
   // swap(a[i+1],pivot);
   // return i+1;
}
/*void alt(int arr[],int l,int h)
{
   int p=part(arr,0,h);
    for(int i=0;i<p&&p<h&&arr[i]<0;i+=2)
    {
       
     swap(arr[i],arr[p]);
     p++;
       
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
     part(arr,0,n);

    for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}