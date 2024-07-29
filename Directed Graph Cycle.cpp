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
