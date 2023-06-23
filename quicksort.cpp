//Quick sort

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h){
	int i=l,j=h, pivot=arr[l];
	while(i<j){
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j)
		swap(arr[i],arr[j]);
	}
	swap(arr[l],arr[j]);
	return j;
}
void quicksort(int arr[],int l,int h){
	if(l<h){
	int pivot=partition(arr,l,h);
	quicksort(arr,l,pivot);
	quicksort(arr,pivot+1,h);
	}
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}  
int main()
{
    cout<<"Rani Uttam Kamble. "<<endl;
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6,89};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Before Sorting"<<endl;
    printArray(arr, size);
    quicksort(arr, 0, size - 1);
    cout<<"After Sorting"<<endl;
    printArray(arr, size);
    return 0;
}
