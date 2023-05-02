#include <bits/stdc++.h>

using namespace std;

vector<int> BFSofGraph(vector<vector<int>> &adj, int V){
    vector<int> vis(V,0), bfs;
    vis[0] = 1;
    
    queue<int> q;
    q.push(0);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    // Time Complexity: O(V+E)
    // Space Complexity: O(V)
    return 0;
}