//GRAPH 1

#include <bits/stdc++.h>
using namespace std;

class graph{
	public:
		unordered_map<int,list<int>>adj;
		
		void addEdge(int u,int v,bool dir){
			//dir=0->undirected else directed graph
			adj[u].push_back(v);
			if(dir==0)
			adj[v].push_back(u);
		}
		
		void printL(){
			for(auto i:adj){
				cout<<i.first<<"->";
				
				for(auto j: i.second)
				cout<<j<<" ";
				cout<<endl;
			}
			cout<<endl;
		}
		
};

int main() {
	int n,m; 
	cout<<"Total Nodes"<<endl;
	cin>>n;
	cout<<"Total Edges"<<endl;
	cin>>m;
	
	graph g;
	
	for(int i=0;i<m;i++){
		int u,v; cin>>u>>v;
		//create undirected graph
		g.addEdge(u,v,0);
	}
	g.printL();
 
    return 0;
}

