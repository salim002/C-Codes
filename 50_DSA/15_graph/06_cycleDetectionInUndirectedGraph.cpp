#include<bits/stdc++.h>
using namespace std;

bool isCycle(int n, vector<vector<int>> &adj, vector<bool> &vis, int parent){
    vis[n]=true;
    for(auto it:adj[n]){
        if(it!=parent){
            if(vis[it]){
                return true;
            }
            if(isCycle(it, adj, vis, n)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n, false);
    bool cycle = false;
    for(int i=0; i<n; i++){
        if(!vis[i] && isCycle(i, adj, vis, -1)){
            cycle = true;
            break;
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }
    return 0;
}