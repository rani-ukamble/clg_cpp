//vector-stl

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	vector<int>v;
	
    cout << "capacity : "<<v.capacity()<<endl;
    
    v.push_back(8);
    cout << "capacity : "<<v.capacity()<<endl;
    
     v.push_back(3);
    cout << "capacity : "<<v.capacity()<<endl;
    
     v.push_back(87);
    cout << "capacity : "<<v.capacity()<<endl;
    
      v.push_back(97);
    cout << "capacity : "<<v.capacity()<<endl;
    
    for(int i:v)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"element at index 3 :"<<v.at(3)<<endl;
    
     v.pop_back();
    cout << "capacity : "<<v.capacity()<<endl;
    
    cout << "size : "<<v.size()<<endl;
    
    cout << "size before clear : "<<v.size()<<endl;
    v.clear();
    cout << "size after clear : "<<v.size()<<endl;

    cout << "capacity after clear : "<<v.capacity()<<endl<<endl;
    
    //if vector size is known ...initialize all elements as 4
    
    vector<int>v1(5,4);   //v1(size,value)
    cout << "vector v2 : "<<endl;
    for(int i:v1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    
    //copy vector
    
    vector<int>v2(v1);
    cout << "vector v2 : "<<endl;
    
     for(int i:v2)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
}
