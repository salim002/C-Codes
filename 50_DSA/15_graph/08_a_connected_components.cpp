#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> components;
vector<int> v;

void DFS(int n, vector<vector<int>> &adj_list, vector<bool> &vis){
	vis[n]=true;
	v.push_back(n);
	for(auto it:adj_list[n]){
		if(!vis[it]){
			DFS(it, adj_list, vis);
		}
	}
}

int main(){
	int n, m;
	cin>>n>>m;
	vector<vector<int>> adj_list(n);
	vector<bool> vis(n);
	for(int i=0; i<m; i++){
		int u, v;
		cin>>u>>v;
		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}
	for(int i=0; i<n; i++){
		if(!vis[i]){
			DFS(i, adj_list, vis);
			components.push_back(v);
			v.clear();
		}
	}
	for(auto it:components){
		for(auto i:it){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}