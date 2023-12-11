#include<bits/stdc++.h>
using namespace std;

bool bipartite = true;

void color(int n, int curr, vector<bool> &vis, vector<vector<int>> adj, vector<int> &col){
    if(col[n]!=-1 && col[n]!=curr){
        bipartite=false;
        return;
    }
    col[n]=curr;
    if(vis[n]){
        return;
    }
    vis[n]=true;
    for(auto it:adj[n]){
        color(it, curr xor 1, vis, adj, col);
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, 0);
    vector<int> col(n, -1);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0; i<n; i++){
        if(!vis[i]){
            color(i, 0, vis, adj, col);
        }
    }
    if(bipartite){
        cout<<"Graph is bipartite"<<endl;
    }
    else{
        cout<<"Graph is not bipartite"<<endl;
    }

    return 0;
}