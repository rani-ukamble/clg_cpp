

#include <bits/stdc++.h>
using namespace std;

struct item{
	int val, wt;
	item(int val,int wt){
		this->val=val;
		this->wt=wt;
	}
};

bool cmp(struct item a, struct item b){
	double r1=(double)a.val/a.wt;
	double r2=(double)b.val/b.wt;
	return r1>r2;
}

double fract(struct item arr[],int N,int size){
	sort(arr,arr+size,cmp);
	int currWt=0;
	double finalVal=0.0;
	
	for(int i=0;i<size;i++){
		if(currWt+arr[i].wt<=N){
			currWt+=arr[i].wt;;
			finalVal+=arr[i].val;
		}
		else{
			int remain=N-currWt;
			finalVal+=arr[i].val*(double)remain/arr[i].wt;
			break;
		}
	}
	return finalVal;
}

int main() {
	int N=60;
	item arr[]={{100,10},{280,40},{120,20},{120,24}};
	int size=4;
    cout << " Max Profit "<<fract(arr,N,size);
    return 0;
}

