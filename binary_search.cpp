//Binary search


#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l,int h,int x){
	
	while(l<=h){
		int mid=(l+h)/2;
		if(arr[mid]==x)
		return mid;
		if(x>mid)
		binary_search( arr, l+1, h, x);
		else
		binary_search( arr, l, h+1, x);
	}
	
}

int main() {
	cout<<"Rani Uttam Kamble. "<<endl;
	int n,x,l,h,arr[90];
	cout<<"Enter array size "<<endl;
	cin>>n;
	cout<<"Enter array elements "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to be serch "<<endl;
	cin>>x;
	cout << binary_search( arr, l, h, x);
     
    return 0;
}

