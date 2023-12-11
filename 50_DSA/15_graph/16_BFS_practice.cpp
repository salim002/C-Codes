// Program to check if a graph is strongly connected or not

#include<bits/stdc++.h>
using namespace std;

void BFS(int n, vector<vector<int>> adj, vector<bool> &vis){  // We can also use DFS here
    queue<int> q;
    q.push(n);
    vis[n]=true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                q.push(it);
                vis[it]=true;
            }
        }
    }
}

bool isStrong(vector<vector<int>> adj){
    int n=adj.size();
    for(int i=0; i<n; i++){
        vector<bool> vis(n, false);
        BFS(i, adj, vis);
        if(find(vis.begin(), vis.end(), false)!=vis.end()){
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    if(isStrong(adj)){
        cout<<"The graph is strongly connected"<<endl;
    }
    else{
        cout<<"The graph is not strongly connected"<<endl;
    }

    return 0;
}