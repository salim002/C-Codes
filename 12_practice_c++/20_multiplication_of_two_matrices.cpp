#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void multiply(int mat1[3][2], int mat2[2][4], int res[3][4]){
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             res[i][j] = 0;
//             for(int k=0; k<2; k++){
//                 res[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }

vector<vector<int>> mul(vector<vector<int>> mat1, vector<vector<int>> mat2){
    if(mat1[0].size()!=mat2.size()){
        cout<<"Multiplication can't be possible!"<<endl;
        vector<vector<int>> temp;
        return temp;
    }
    int n=mat1.size(), m=mat2[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans[i][j]=0;
            for(int k=0; k<mat1[0].size(); k++){
                ans[i][j]+= mat1[i][k]*mat2[k][j];
            }
        }
    }
    return ans;
}

int main(){
    // int mat1[3][2] ={
    //                     {1, 2},
    //                     {3, 4},
    //                     {5, 6}
    //                 };
    // int mat2[3][4] ={
    //                     {1, 2, 3, 4},
    //                     {5, 6, 7, 8},
    //                 };
    // int res[3][4];
    // multiply(mat1, mat2, res);
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>> mat1 ={
                            {1, 2},
                            {3, 4},
                            {5, 6}
                        };
    vector<vector<int>> mat2 = {
                            {1, 2, 3, 4},
                            {5, 6, 7, 8},
                        };
    for(auto it:mul(mat1, mat2)){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}