#include<bits/stdc++.h>
using namespace std;

class DSU{
    public:
    vector<int> parent, size, rank;
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1, 1);
        rank.resize(n+1);
        for(int i=0; i<=n; i++){
            parent[i]=i;
        }
        for(int i=0; i<=n; i++){
            size[i]=1;
        }
    }
    int find_set(int n){
        if(parent[n]==n){
            return n;
        }
        return parent[n]=find_set(parent[n]);
    }
    void unionBySize(int a, int b){
        a=find_set(a);
        b=find_set(b);
        if(a==b){
            return;
        }
        if(size[a]<size[b]){
            swap(a, b);
        }
        parent[b]=a;
        size[a]+=size[b];
    }
    void unionByRank(int a, int b){
        a=find_set(a);
        b=find_set(b);
        if(a==b){
            return;
        }
        if(rank[a]>rank[b]){
            parent[b]=a;
        }
        else if(rank[a]<rank[b]){
            parent[a]=b;
        }
        else{
            parent[b]=a;
            rank[a]++;
        }
    }
};

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        edges.push_back({u, v});
    }
    DSU ds(n);
    bool cycle=false;
    for(auto it:edges){
        if(ds.find_set(it[0])==ds.find_set(it[1])){
            cycle=true;
            break;
        }
        else{
            ds.unionBySize(it[0], it[1]);
        }
    }
    if(cycle){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }

    return 0;
}