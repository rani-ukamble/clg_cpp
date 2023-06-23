//sum of array

#include <bits/stdc++.h>
using namespace std;

class sol{
public:
int getsum(int a[],int n){
	int sum=0;
		for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}	
};


int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sol ob;
	
    cout << ob.getsum(a,n);
    return 0;
}

