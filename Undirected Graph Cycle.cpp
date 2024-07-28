//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
  
    bool DFS(auto mp, auto u, auto& visited, auto parent){
        
        visited[u] = true;
        
        for(auto &v: mp[u]){
            if(v == parent) continue;
            if(visited[v]) return true;
            if(DFS(mp, v, visited, u) ==  true) return true;
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> visited(V, false);
        for(int i=0 ; i<V; i++){
            if(!visited[i] && DFS(adj, i, visited, -1))
                return true;
        }
        return false;
    }
};
