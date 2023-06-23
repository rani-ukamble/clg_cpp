//stack-stl

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	stack<int>s;
	
	s.push(8);
	s.push(28);
	s.push(18);
	s.push(68);
	s.push(77);	
	cout << "size : "<<s.size()<<endl;
	
	cout <<"top : "<<s.top()<<endl;
	
	while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
     }
    cout<<endl;
    	
	cout << "empty or not "<<s.empty()<<endl;  	
   
    return 0;
}


