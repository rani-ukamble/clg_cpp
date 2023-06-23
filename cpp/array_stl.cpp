//stl array

#include <bits/stdc++.h>
using namespace std;

int main() {
	int basic_array[3]={1,2,3};
	
	array<int,4>a={1,2,3,4};   //datatype,size
	
	int size=a.size();
	
	for(int i=0;i<size;i++)
		cout<<a[i];
	
	cout << "\n\nElement at index 3 is "<<a.at(3)<<endl;
	
	cout<<"empty or not "<<a.empty()<<endl;  //print 1 if empty , else 0
	
	cout<<"first "<<a.front()<<endl;
	cout<<"last "<<a.back()<<endl;
	
    return 0;
}

