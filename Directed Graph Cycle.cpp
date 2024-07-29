//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// ------------------------------------------------- DFS -------------------------------------------
// ------------------------------------------------- DFS -------------------------------------------
// ------------------------------------------------- DFS -------------------------------------------
class Solution {
  public:
  
    bool directedDFS(auto& adj, auto& visited, auto &in_recursion, int source){
        
        visited[source]= true;
        in_recursion[source] = true;
        
        for(auto v: adj[source]){
            if( visited[v]  && in_recursion[v]) return true;
            else if( !visited[v] && directedDFS(adj, visited, in_recursion, v) ==  true)
                return true;
        }
        
        in_recursion[source]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<bool> in_recursion(V, false);
        
        for(int i=0; i<V; i++){
            if(!visited[i] && directedDFS(adj, visited, in_recursion, i))
                return true;
        }
        
        return false;
    }
};


// Detect Cycle in Directed Graph using BFS -- https://www.youtube.com/watch?v=74suJP4bwf0&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=9
// ------------------------------------------------- BFS -------------------------------------------
// ------------------------------------------------- BFS -------------------------------------------
// ------------------------------------------------- BFS -------------------------------------------
// TOPOLOGICAL SORTING REQUIRED TO LEARN 


class Solution
{
	public:
	void topoSortBFS(auto adj, auto& indegree, auto& result, int V){
	    
	    queue<int> q;
	    
	    for(int i =0; i<V; i++){
    	     if(indegree[i] == 0)
    	        q.push(i);
    	 }
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            result.push_back(u);
            
            for(auto& v: adj[u]){
                indegree[v]--;
                if(indegree[v] == 0)
                    q.push(v);
            }
            
        }
    	 
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{   
	    vector<int> indegree(V, 0);
	    vector<int> result;
	    
    	 for(int i=0; i<V; i++){
    	     for(auto& u: adj[i]){
    	         indegree[u]++;
    	     }
    	 }
    	 
    	 topoSortBFS(adj, indegree, result, V);
    	 return result;
	}
};

