#include<bits/stdc++.h>
using namespace std;

vector<int> parent, rankk;
void DSU(int n){
    parent.resize(n+1);
    rankk.resize(n+1);
    for(int i=0; i<=n; i++){
        parent[i]=i;
    }
}
int find_set(int n){
    if(parent[n]==n){
        return n;
    }
    return parent[n]=find_set(parent[n]);
}
void union_set(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a==b){
        return;
    }
    if(rankk[a]>rankk[b]){
        parent[b]=a;
    }
    else if(rankk[a]<rankk[b]){
        parent[a]=b;
    }
    else{
        parent[b]=a;
        rankk[a]++;
    }
}

int main(){

    return 0;
}