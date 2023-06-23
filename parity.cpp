//Odd Even Parity
#include<iostream> 
using namespace std; 
 
int main() 
{ 
 	string frame; 
 	cout<<"Enter the data of frame:"<<"\n"; 
 	cin>>frame;  	int cnt=0; 
 	for(int i=0;i<frame.size();i++){ 
 	 	if(frame[i]=='1') 
 	 	cnt++;} 
 	 	if(cnt%2==0) 
 	 	cout<<"Even Parity"<<"\n"; 
 	 	else 
  cout<<"Odd Parity"<<"\n";  return 0;} 

