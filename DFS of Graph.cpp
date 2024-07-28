

//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    void DFS(auto &mp, int u, auto &visited, auto& result ){
        if(visited[u])
            return;
            
        visited[u]= true;
        result.push_back(u);
        
        for(auto &v: mp[u] ){
            if(! visited[v]){
                DFS(mp, v, visited, result);
            }
        }
    }
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int, vector<int>> mp;
        vector<int> result;
        vector<int> visited(V, false);
        
        for(int u=0; u<V; u++){
            for(auto& v: adj[u]){
                mp[u].push_back(v);
            }
        }
        
        DFS(mp, 0, visited, result);
        return result;
        
    }
};

