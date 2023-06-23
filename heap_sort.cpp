//Heap sort

#include <iostream>
using namespace std;
 
void heapify(int arr[], int N, int i)
{
 
    int largest = i;
 
    int l = 2 * i + 1;
 
    int r = 2 * i + 2;
 
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{
 
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i > 0; i--) {
 
        swap(arr[0], arr[i]);
      heapify(arr, i, 0);
    }
}


void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
	
int N;
cout<<"Name:Rani Uttam Kamble. "<<endl;
cout<<endl;
cout<<"Roll no:20141157"<<endl;
cout<<endl;
cout<<"Enter the number of elements in an array: "<<endl;
cin>>N;
int arr[N];
cout<<"Enter elements in your array:"<<endl;
for(int i=0;i<N;i++)
{
cin>>arr[i];
}  
    heapSort(arr, N);
    cout<<endl;
    cout << "Sorted array is \n";
    printArray(arr, N);
} 

