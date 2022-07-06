#include<bits/stdc++.h>
using namespace std;

class Graph{
	public:
		map<int,bool> visited;
		map<int, list<int> > adj;
		
		void addEdge(int src, int des){
			adj[src].push_back(des);
			adj[des].push_back(src);
		}
		
		void bfs(int v){
			 visited[v] = true;
			 queue<int> q;
			 q.push(v);
			 
			 while(!q.empty()){
			 	int curr = q.front();
			 	cout<<curr<<" ";
			 	q.pop();
			 	
			 	list<int>::iterator i;
			 	for(i=adj[curr].begin();i!=adj[curr].end();i++){
			 		if(!visited[*i]){
			 			visited[*i]=true;
			 			q.push(*i);
					 }
			 		
				 }
			 }
		}
};

int main(){
	Graph g;
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	g.bfs(2);
	
}
