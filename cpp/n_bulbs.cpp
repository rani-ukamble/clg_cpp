#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,c1=0,c2=0;
	 string a,b;
	cin>>t;
	while(t--){
	    cin>>n;
	   
	    cin>>a>>b;
	    for(int i=0;i<a.length();i++){
	        if(a[i]=='1')
	        c1++;}
	    for(int i=0;i<b.length();i++){
	        if(b[i]=='1')
	        c2++;
	    }
	    int ans=abs(c1-c2);
	    if(ans%2==0)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	    
	}
	return 0;
}
