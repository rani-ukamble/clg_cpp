//Nesting of vectors

#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>v){
	for(int i=0;i<v.size();++i){
		cout<<v.first<<" "<<v.second;
	}
	cout<<endl;
}

int main() {
	vector<pair<int,int>>v={{1,2},{3,4},{4,5}};
	printVec(v);
    cout << " ";
    return 0;
}

