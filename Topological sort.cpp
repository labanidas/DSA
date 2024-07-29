// https://www.geeksforgeeks.org/problems/topological-sort/1


// ---------------------------------------- DFS ---------------------------------------------
// ---------------------------------------- DFS ---------------------------------------------
// ---------------------------------------- DFS ---------------------------------------------
//Topological Sort using DFS -- https://www.youtube.com/watch?v=WbbYZRr4arw&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=7
class Solution
{
	public:
	void topologicalSortDFS(auto adj, int source, auto& visited, auto& st){
	    visited[source] = true;
	    
	    for(auto& v: adj[source]){
	        if(!visited[v])
	            topologicalSortDFS(adj, v, visited, st);
	    }
	    st.push(source);
	    return;
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool> visited(V, false);
	    stack<int> st;
	    vector<int> result;
	    
	    for(int i=0; i<V; i++){
	        if(!visited[i])
	            topologicalSortDFS(adj, i, visited, st);
	            
	    }
	   while(!st.empty()){
	      result.push_back( st.top());
	       st.pop();
	   }
	   return result;
	    
	}
};



// ---------------------------------------- BFS ---------------------------------------------
// ---------------------------------------- BFS ---------------------------------------------
// ---------------------------------------- BFS ---------------------------------------------
// Kahn's Algorithm(Topological Sort using BFS) -- https://www.youtube.com/watch?v=uVl4ftleTes&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=8
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

