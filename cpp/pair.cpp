//Pairs STL

#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<int,string>p;
	//p=make_pair(1,"Raj");
     p={1,"Raj"};
     cout <<p.first<<" "<<p.second<<endl;
     
     pair<int,string>&p1=p;
     p1.first=3;
     cout <<p.first<<" "<<p.second<<endl;
     
     cout<<endl;
     //pair array
     int a[]={1,2,3};
     int b[]={11,22,33};
     
     pair<int, int>p_array[3];
     p_array[0]={1,11};
     p_array[1]={2,22};
     p_array[2]={3,33};
     
     for(int i=0;i<3;i++){
     	cout <<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	
	swap(p_array[0],p_array[1]);
	cout<<endl;
	for(int i=0;i<3;i++){
     	cout <<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	
	cout<<endl;
	
	pair<int,string>p2;
	cin>>p2.first>>p2.second;
	cout <<p2.first<<" "<<p2.second<<endl;
    return 0;
}

