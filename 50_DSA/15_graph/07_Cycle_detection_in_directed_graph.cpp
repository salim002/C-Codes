#include<bits/stdc++.h>
using namespace std;

bool isCycle(int n, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &stack){
    stack[n] = true;
    if(!vis[n]){
        vis[n] = true;
        for(auto it:adj[n]){
            if(stack[it]){
                return true;
            }
            if(!vis[it] && isCycle(it, adj, vis, stack)){
                return true;
            }
        }
    }
    stack[n] = false;
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<bool> vis(n+1, false);
    vector<bool> stack(n+1, false);
    bool cycle = false;
    for(int i=0; i<=n; i++){
        if(!vis[i] && isCycle(i, adj, vis, stack)){
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