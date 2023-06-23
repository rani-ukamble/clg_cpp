//queue-stl

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	queue<int>q;
	
	q.push(8);
	q.push(28);
	q.push(18);
	q.push(68);
	q.push(77);	
	cout << "size : "<<q.size()<<endl;
	
	cout <<"front : "<<q.front()<<endl;
	
	while (!q.empty()) {
        cout << ' ' << q.front();
        q.pop();
     }
    cout<<endl;
    	
	cout << "empty or not "<<q.empty()<<endl;  	
   
    return 0;
}


