#include <bits/stdc++.h>

using namespace std;

void DFS(vector<vector<int>> &adj, vector<int> &vis, vector<int> &dfs, int node){
    vis[node] = 1;
    dfs.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            DFS(adj, vis, dfs, it);
        }
    }
}

vector<int> DFSofGraph(vector<vector<int>> &adj, int V){
    vector<int> vis(V,0), dfs;
    int start = 0;
    DFS(adj, vis, dfs, start);
    return dfs;
}

int main(){
    // Time Complexity: O(V+E)
    // Space Complexity: O(V)
    return 0;
}