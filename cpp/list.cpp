//list-stl

//insertion and deletion is like doubly linked list...random access not possible

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	list<int>l;
	
	l.push_front(8);
	l.push_back(28);
	l.push_front(18);
	l.push_back(68);
	l.push_back(77);	
	cout << "size : "<<l.size()<<endl;
	
	cout << "before pop "<<endl;	
	for(int i:l)
    {
    	cout<<i<<" ";
    }
    cout<<endl<<endl;
     
	l.pop_back(); 
	l.pop_front(); 
	
	cout << "after pop "<<endl;
	for(int i:l)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    	  	
    cout << "empty or not "<<l.empty()<<endl;
    
    cout << "size before erase : "<<l.size()<<endl;
    l.erase(l.begin());  //erase 1st element
    cout << "size after erase : "<<l.size()<<endl<<endl;
     
     cout<<"elements in list: ";
  	for(int i:l)
    {
    	cout<<i<<" ";
    }
    cout<<endl<<endl;
    
    //if list size is known ...initialize all elements as 4
    
    list<int>l1(5,4);   //l1(size,value)
    cout << "list l1 : "<<endl;
    for(int i:l1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}


