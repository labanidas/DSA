//Topological Sort using DFS -- https://www.youtube.com/watch?v=WbbYZRr4arw&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=7
// https://www.geeksforgeeks.org/problems/topological-sort/1


// ---------------------------------------- DFS ---------------------------------------------
// ---------------------------------------- DFS ---------------------------------------------
// ---------------------------------------- DFS ---------------------------------------------

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

