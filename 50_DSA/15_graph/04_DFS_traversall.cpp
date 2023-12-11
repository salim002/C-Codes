#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<bool> vis(N, false);


void add_edge(map<int, vector<int>> &adj_list, int x, int y){
    adj_list[x].push_back(y);
    adj_list[y].push_back(x);
}

void DFS(map<int, vector<int>> &adj_list, int node){
    cout<<node<<" ";
    vis[node] = true;
    for(auto it:adj_list[node]){
        if(!vis[it]){
            vis[it] = true;
            DFS(adj_list, it);
        }
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    map<int, vector<int>> adj_list;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        add_edge(adj_list, x, y);
    }
    int start;
    cin>>start;
    DFS(adj_list, start);
    return 0;
}