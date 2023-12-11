// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of nodes and edges: ";
    cin>>n>>m;
    int arr[m][2];
    cout<<"Enter the edges: "<<endl;
    for(int i=0; i<m; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    // int adj[n+1][n+1];
    // for(int i=0; i<n+1; i++){
    //     for(int j=0; j<n+1; j++){
    //         adj[i][j] = 0;
    //     }
    // }
    vector<vector<int>> adj(n+1, vector<int>(n+1, 0));
    for(int i=0; i<m; i++){
        int x = arr[i][0];
        int y = arr[i][1];
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    cout<<"The adjacency matrix of the given graph is:"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}