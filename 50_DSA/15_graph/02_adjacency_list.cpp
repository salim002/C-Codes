#include<iostream>
#include<list>
using namespace std;

void add_edge(list<int> adj_list[], int v, int u){
    adj_list[v].push_back(u);
    adj_list[u].push_back(v);
}

void display_list(list<int> adj_list[], int n){
    for(int i=0; i<n; i++){
        cout<<i<<" --> ";
        for(auto it:adj_list[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n, m; // Here n is number of nodes and m is number of edges
    cin>>n>>m;
    list<int> adj_list[n];
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        add_edge(adj_list, v, u);
    }
    // add_edge(adj_list, 0, 4);
    // add_edge(adj_list, 0, 3);
    // add_edge(adj_list, 1, 2);
    // add_edge(adj_list, 1, 4);
    // add_edge(adj_list, 1, 5);
    // add_edge(adj_list, 2, 3);
    // add_edge(adj_list, 2, 5);
    // add_edge(adj_list, 5, 3);
    // add_edge(adj_list, 5, 4);
    display_list(adj_list, n);
    return 0;
}