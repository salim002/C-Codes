#include<bits/stdc++.h>
using namespace std;

bool isOddCycle(int n, vector<vector<int>> &adj_list, vector<bool> &vis, vector<int> &color){
    vis[n]=true;
    for(auto it:adj_list[n]){
        if(color[it]==color[n]){
            return true;
        }
        if(!vis[it]){
            color[it] = color[n]^1;
            if(isOddCycle(it, adj_list, vis, color)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj_list(n);
    vector<bool> vis(n);
    vector<int> color(n, -1);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bool odd=false;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            color[i]=1;
            if(isOddCycle(i, adj_list, vis, color)){
                odd=true;
                break;
            }
        }
    }
    if(odd){
        cout<<"Odd Cycle is present"<<endl;
    }
    else{
        cout<<"Odd cycle is not present"<<endl;
    }

}