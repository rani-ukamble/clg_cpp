//Deque-stl  : double ended queue

//insertion and deletion via both ends

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	deque<int>d;
	
	d.push_front(8);
	d.push_back(28);
	d.push_front(18);
	d.push_back(68);
	d.push_back(77);	
	cout << "size : "<<d.size()<<endl;
	
	cout << "before pop "<<endl;	
	for(int i:d)
    {
    	cout<<i<<" ";
    }
    cout<<endl<<endl;
 
     cout<<"element at index 3 :"<<d.at(3)<<endl;
     
     cout<<"first element :"<<d.front()<<endl;
     cout<<"last element :"<<d.back()<<endl<<endl;
     
	d.pop_back(); 
	d.pop_front(); 
	
	cout << "after pop "<<endl;
	for(int i:d)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    	  	
    cout << "empty or not "<<d.empty()<<endl;
    
    cout << "size before erase : "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);  //erase 1st element
    cout << "size after erase : "<<d.size()<<endl<<endl;
     
     cout<<"elements in queue: ";
  	for(int i:d)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}

