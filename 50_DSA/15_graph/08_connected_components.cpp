#include<bits/stdc++.h>
using namespace std;

int get_comp(int idx, vector<vector<int>> adj, vector<bool> &vis){
    vis[idx]=true;
    int ans=1;
    for(auto it:adj[idx]){
        if(!vis[it]){
            ans+=get_comp(it, adj, vis);
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    vector<int> components;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0; i<n; i++){
        if(!vis[i]){
            components.push_back(get_comp(i, adj, vis));
        }
    }
    cout<<components.size()<<endl;
    for(auto it:components){
        cout<<it<<" ";
    }
    return 0;
}