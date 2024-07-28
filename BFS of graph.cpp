// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1


class Solution {
  public:
  
    void BFS(auto mp, int u,auto& visited, auto &result){
        queue<int> q;
        q.push(u);
        visited[u]= true;
        result.push_back(u);
        
        
        while(!q.empty()){
            u = q.front();
            q.pop();
            
            for(auto& v: mp[u]){
                if(!visited[v]){
                    q.push(v);
                    visited[v] = true;
                    result.push_back(v);
                }
            }
        }
    }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int, vector<int>> mp;
        vector<int> result;
        vector<int> visited(V, false);
        
        for(int u=0; u<V; u++){
            for(auto& v: adj[u]){
                mp[u].push_back(v);
            }
        }
        
        BFS(mp, 0, visited, result);
        
        return result;
        
    }
};
