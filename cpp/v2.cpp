//vector

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	v.push_back(6);
	v.push_back(7);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	vector<int>&v1=v;
	v1.push_back(4);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	
    cout << " ";
    return 0;
}

