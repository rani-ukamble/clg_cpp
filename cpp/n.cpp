

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>n;
	int arr[7];
	for(int i=0;i<6;i++){
		if(i%2==0)
		n.push_back(i);
		
	}
       
    for (auto it = n.begin(); it != n.end(); it++)
        cout << *it << " ";
cout<<endl;
	for(int i=0;i<6;i++){
		n.push_back(i*2);
	}
	cout<<endl;
    for (auto it = n.begin(); it != n.end(); it++)
	cout << *it << " ";
    return 0;
}
