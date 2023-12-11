#include<bits/stdc++.h>
using namespace std;

const int inf = 1e7;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int, int>>> adj_list(n);
    vector<int> dist(n, inf);
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    int src;
    cin>>src;
    dist[src]=0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, src});
    while(!q.empty()){
        auto curr = q.top();
        q.pop();
        for(auto it:adj_list[curr.second]){
            if(dist[it.first]>curr.first+it.second){
                dist[it.first]=curr.first+it.second;
                q.push({dist[it.first], it.first});
            }
        }
    }
    // queue<int> q;
    // q.push(src);
    // while(!q.empty()){
    //     int curr = q.front();
    //     q.pop();
    //     for(auto it:adj_list[curr]){
    //         if(dist[it.first]>dist[curr]+it.second){
    //             dist[it.first]=dist[curr]+it.second;
    //             q.push(it.first);
    //         }
    //     }
    // }
    for(auto it:dist){
        if(it!=inf){
            cout<<it<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
    cout<<endl;
    return 0;
}