// Binary Search

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int x)
{
	while (l <= h) {
		int m = (l + h) / 2;

		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			h = m - 1;
	}
	// if we reach here, then element was
	// not present
	return -1;
}

int main(void)
{
	cout<<"Rani Uttam Kamble. "<<endl;
	int arr[] = { 89, 37, 4, 10, 40, 99 };
	int x = 99;
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not found in array"
		: cout << "Element is present at index " << result;
	return 0;
}

