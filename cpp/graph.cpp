//Graph

#include <bits/stdc++.h>
#include <map>
using namespace std;

class graph{
public:
unordered_map<int,list<int>>adj;
void addEdge(int u, int v, int dir){
	//dir=0  ->undirected graph
	//dir=1  ->directed graph
	//create edge from u to v
	adj[u].push_back(v);
	if(dir==0)
	adj[v].push_back(u);
}

void addList(){
	for(auto i:adj){
		cout<<i.first<<"->";
		for(auto j:i.second)
		cout<<j<<", ";
	}
	cout<<endl;
}	
};

int main() {
	int n;
    cout << "Enter no. of nodes "; cin>>n;
    int m;
    cout << "Enter no. of edges "; cin>>m;
    graph g;
    
    for(int i=0;i<m;i++){
    	int u,v;
    	cin>>u>>v;
    	//creating undirected graph
    	g.addEdge(u,v,0);
    	//printing graph
    	g.addList();
    }
    return 0;
}

