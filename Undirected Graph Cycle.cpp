//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


// ------------------------------------------------ DFS ---------------------------------------------------
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


// ------------------------------------------------ BFS ---------------------------------------------------
class Solution {
  public:
  
    bool BFS(auto& adj, int u, auto &visited){
        queue<pair<int, int>> q;
        q.push({u, -1});
        visited[u] = true;
        
        while(!q.empty()){
            pair<int, int>  P = q.front(); 
            q.pop();
            int source = P.first;
            int parent = P.second;
            
           
            
            for(auto &v : adj[source]){
                if(!visited[v]){
                    q.push({v, source});
                    visited[v] = true;
                }else if(v != parent){
                    return true;
                }
            }
        }
        
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        for(int i=0 ; i<V; i++){
            if(!visited[i] && BFS(adj, i, visited))
                return true;
        }
        return false;
    }
};
