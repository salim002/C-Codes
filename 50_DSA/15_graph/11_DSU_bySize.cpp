#include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> sz;

void DSU(int n){
    parent.resize(n+1);
    sz.resize(n+1);
    for(int i=0; i<=n; i++){
        parent[i]=i;
        sz[i]=1;
    }
}

int find_set(int v){
    if(parent[v]==v){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a==b){
        return;
    }
    if(sz[a]<sz[b]){
        swap(a, b);
    }
    parent[b]=a;
    sz[a]+=sz[b];
    // if(sz[a]>sz[b]){
    //     parent[b]=a;
    // }
    // else if(sz[a]<sz[b]){
    //     parent[a]=b;
    // }
    // else{
    //     parent[b]=a;
    //     sz[a]+=sz[b];
    // }
}

int main(){

    return 0;
}