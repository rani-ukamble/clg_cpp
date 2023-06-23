

#include <bits/stdc++.h>
using namespace std;

int optmerge(int n, int files[]){
	priority_queue<int, vector<int>, greater<int> > pq;
	
	for(int i=0;i<n;i++){
		pq.push(files[i]);
	}
	int cnt=0;
	while(pq.size()>1){
		int f1=pq.top();
		pq.pop();
		int f2=pq.top();
		pq.pop();
		
		int temp=f1+f2;
		
		cnt+=temp;
		pq.push(temp);
	}
	return cnt;
	
}

int main() {
	int n = 6;
 
    // 6 files with their sizes
    int files[] = { 2, 3, 4, 5, 6, 7 };
 
    // Total no of computations
    // do be done final answer
    cout << "Minimum Computations = "
         << optmerge(n, files);
         return 0;
}

