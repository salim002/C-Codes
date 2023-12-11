#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N = 1e5;
bool vis[N];
vector<int> adj_list[N];


void add_edge(vector<int> adj_list[], int x, int y){
    adj_list[x].push_back(y);
    adj_list[y].push_back(x);
}

void DFS(int node){
    // cout<<node<<" "; // Preorder
    queue<int> q;
    q.push(node);
    // cout<<node<<" "; // Inorder
    vis[node] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj_list[node]){
            if(!vis[it]){
                vis[it] = true;
                DFS(it);
            }
        }
        cout<<node<<" "; // Postorder
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        add_edge(adj_list, x, y);
    }
    for(int i=0; i<n; i++){
        vis[i] = false;
    }
    DFS(1);

    return 0;
}