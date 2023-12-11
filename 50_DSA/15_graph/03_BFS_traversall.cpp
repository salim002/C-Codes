#include<bits/stdc++.h>
using namespace std;

const int N=1e5;

void add_edge(map<int, vector<int>> &adj_list, int x, int y){
    adj_list[x].push_back(y);
    adj_list[y].push_back(x);
}

int main(){
    int m;
    cin>>m;
    map<int, vector<int>> adj_list;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        add_edge(adj_list, x, y);
    }
    vector<bool> visited(N, false);
    queue<int> q;
    int start;
    cin>>start;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto it:adj_list[node]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
    return 0;
}