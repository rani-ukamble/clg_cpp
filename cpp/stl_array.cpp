//STL - ARRAY

#include<iostream>
#include<array>
using namespace std;

int main() 
{
	int basic_array[3]={1,2,3};
	
	array<int,4>a={1,2,3,4};     //datatype,size
	
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
     cout << "\n";
     
     cout<<"element at index 2 is "<<a.at(2);
     return 0;
}

