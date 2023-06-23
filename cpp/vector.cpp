//vector

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	for(int i=0;i<3;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
    cout << " ";
    return 0;
}

