//Deque-stl  : double ended queue

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	deque<int>d;
	
	d.push_front(8);
	d.push_back(28);
	d.push_front(18);
	d.push_back(68);
		
	for(int i:d)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    	
    cout << " ";
    return 0;
}

