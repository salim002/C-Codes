#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj_list[], int x, int y){
    adj_list[x].push_back(y);
    adj_list[y].push_back(x);
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> adj_list[n+1];
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        add_edge(adj_list, x, y);
    }
    // bool visited[n];
    // for(int i=0; i<n; i++){
    //     visited[i] = 0;
    // }
    vector<bool> visited(n+1, false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto it:adj_list[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }
    }

    return 0;
}