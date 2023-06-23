//Linear Search

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,i,arr[90];
	cout<<"Enter array size "<<endl;
	cin>>n;
	cout<<"Enter array elements "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to be serch "<<endl;
	cin>>x;
	int p=0;	
	for(i=0;i<n;i++){
		if(x==arr[i]) {
		
		cout << "Element found at position "<<i+1<<endl; 
		p=1; 
		}
	
	} 
	if(p==0) 
	{
	
	cout << "Element not found  "<<endl; 
}
     
    return 0;
}

