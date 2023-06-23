//C++ STL program to find maximum or largest 
//element of a vector 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //vector
    vector<int> v1{ 10, 20, 30, 40, 50,50 };

    //printing elements
    cout << "vector elements..." << endl;
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    //finding the maximum element
    int max = *max_element(v1.begin(), v1.end());

    cout << "maximum/largest element is: " << max << endl;

    return 0;
}

