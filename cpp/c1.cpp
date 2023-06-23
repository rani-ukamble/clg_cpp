#include <iostream>
#include <array>
using namespace std;

int main() {
	array <int , 3> arr={'G','f','G'}; // ASCII val of 'G' =71
	array <int , 3> arr1={'M','M','P'}; // ASCII val of 'M' = 77 and 'P' = 80
	bool x = arr.empty(); // false ( not empty)
	cout<<boolalpha<<(x);
	return 0;
}

