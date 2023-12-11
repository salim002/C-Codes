#include<bits/stdc++.h>
using namespace std;

bool isNegativeCycle(vector<vector<int>> &mat){
	    int n=mat.size(), inf=1e9;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            if(mat[i][j]==-1){
	                mat[i][j]=inf;
	            }
	        }
	    }
	    for(int k=0; k<n; k++){
	        for(int i=0; i<n; i++){
	            for(int j=0; j<n; j++){
	                mat[i][j]=min(mat[i][j], mat[i][k]+mat[k][j]);
	            }
	        }
	    }
	    // for(int i=0; i<n; i++){
	    //     for(int j=0; j<n; j++){
	    //         if(mat[i][j]==inf){
	    //             mat[i][j]=-1;
	    //         }
	    //     }
	    // }
        for(int i=0; i<n; i++){
            if(mat[i][i]<0){
                return true;
            }
        }
        return false;
	}


int main(){
    vector<vector<int>> mat = {
                                {0,1,43},
                                {1,0,6},
                                {-1,-1,0}
                            };  // Here in -1 means infinity(there is no direct edge between two nodes)
    // vector<vector<int>> mat = {
    //                             {0,1,43},
    //                             {1,0,6},
    //                             {-10,-1,0}
    //                         };  // Here in -1 means infinity(there is no direct edge between two nodes)

    if(isNegativeCycle(mat)){
        cout<<"Negative Cycle Found"<<endl;
    }
    else{
        cout<<"There is no negative cycle in the graph"<<endl;
    }
    return 0;
}