#include<bits/stdc++.h>
using namespace std;

void get_comp(int idx, vector<vector<int>> adj, vector<bool> &vis){
    vis[idx]=true;
    for(auto it:adj[idx]){
        if(!vis[it]){
            get_comp(it, adj, vis);
        }
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            get_comp(i, adj, vis);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}