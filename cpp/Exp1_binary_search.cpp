//Binary Search

#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l,int h, int key){
	int mid=(l+h)/2;
	while(l<h){
		if(key==arr[mid])
			return mid;
		else if(key<arr[mid])
			mid=h=mid+1;
		else
			l=mid+1;
	}
	return -1;
}

int main() {
	int n,key,arr[n];
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter elements of array in ascending order\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter elements to be search in array\n";
	cin>>key;
	cout<<binary_search(arr,0,n-1, key);
    return 0;
}

