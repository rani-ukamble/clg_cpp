//Minimum Hamming distance 

#include <iostream> 
using namespace std; 
int main() 
{ 
 	int a[20], b[20], c[20], d[20], i, j, l, cnt=0; 
 	cout<<"Enter length of code:"; 
 	cin>>l; 
 	cout<<"Enter 1st Frame:"<<"\n";  	for( i=1; i<=l; i++) 
 	{ 
 	 	cin>>a[i]; 
 	} 
 	 	cout<<"Enter 2nd Frame:"<<"\n"; 
 	for( i=1; i<=l; i++) 
 	{ 
 	 	cin>>b[i]; 
 	} 
 	 	cout<<"Enter 3rd Frame :"<<"\n"; 
 	for( i=1; i<=l; i++) 
 	{ 
 	 	cin>>c[i]; 
 	} 
 	 	 
 	 
 	 
 	 
 	int h1, h2, h3; 
 	 
 	for( i=1; i<=l; i++){  	 if(a[i]!=b[i]) { 
 	  	cnt++; }}  	h1=cnt;  	cnt=0; 
 	cout<<"Hamming distance between a & b is="<< h1<<endl; 
 	 
 	 	for( i=1; i<=l; i++){ 
 	 if(b[i]!=c[i]) { 
 	  	cnt++; }} 
 	 	h2=cnt;  	 	cnt=0; 
 	cout<<"Hamming distance between b & c is="<< h2<<endl; 
 	 	for( i=1; i<=l; i++) 
 	{ 
 	 if(a[i]!=c[i]) { 
 	  	cnt++; }} 
 	 	h3=cnt;  	 	cnt=0; 
 	cout<<"Hamming distance between a & c is="<< h3<<endl; 
 	 
 	if(h1<=h2 && h1<=h3) 
 	{cout<<"Minimum hamming distance is:"<<h1<<"\n";  	
	 cout<<"Mininmum hamming distance is between a and b";}  	
	 else if(h2<=h1 && h2<=h3) 
 	{
	 cout<<"Minimum hamming distance is:"<<h2<<"\n";  	
	 cout<<"Mininmum hamming distance is between b and c";
	 }  	else if(h3<=h1 && h3<=h2){  	 	
	 cout<<"Minimum hamming distance is:"<<h3<<"\n";  	 	
	 cout<<"Mininmum hamming distance is between a and c"; 
 	 	}} 

