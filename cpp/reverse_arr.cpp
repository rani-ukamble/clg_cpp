#include<iostream>
using namespace std;

int main()
{
	//code
	int n,i;
	cin>>n;
    int	a[n];
	for( i=0;i<n;i++){
	    cin>>a[i];
	    
	}
	int j=n-1;
	i=0;
	while(i<j){
	    swap(a[i],a[j]);
	    i++; 
	    j--;
	}
	
	for(int i=0;i<n;i++){
	    cout<<a[i]<<endl;
	    
	}
	
	return 0;
}
