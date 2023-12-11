#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;

vector<int> parent(N);
vector<int> sz(N);

// void make(int v){ //Naive implementation
//     parent[v] = v;
// }

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}

// int find_set(int v){ // Naive implementation, Complexity = O(n)
//     if(parent[v]==v){
//         return v;
//     }
//     return find_set(parent[v]);
// }

int find_set(int v){  // Complexity = O(log(n))
    if(parent[v]==v){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}

// void union_sets(int a, int b){ //Naive implementation
//     a=find_set(a);
//     b=find_set(b);
//     if(a!=b){
//         parent[b]=a;
//     }
// }

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a, b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main(){
    for(int i=0; i<N; i++){
        make_set(i);
    }
    return 0;
}