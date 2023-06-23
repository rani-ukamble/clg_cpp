

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int m, int h){
	
}

void merge_sort(int arr[], int l, int h){
int m;
if(l<h){
	m=(l+(r-l))/2;
	merge_sort(arr,l,m);
	merge_sort(arr,m+1,h);
	merge(arr,l,m,h);	
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
    
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6,89};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Before Sorting"<<endl;
    printArray(arr, size);
    quicksort(arr, 0, size - 1);
    cout<<"After Sorting"<<endl;
    printArray(arr, size);
    return 0; 
}

