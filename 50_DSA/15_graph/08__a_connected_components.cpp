#include<bits/stdc++.h>
using namespace std;

vector<int> get_comp(int idx, vector<vector<int>> adj, vector<bool> &vis){
    vector<int> v;
    vis[idx]=true;
    v.push_back(idx);
    for(auto it:adj[idx]){
        if(!vis[it]){
            vector<int> temp = get_comp(it, adj, vis);
            v.insert(v.end(), temp.begin(), temp.end());
        }
    }
    return v;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    vector<vector<int>> components;
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
    for(auto it:components){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}