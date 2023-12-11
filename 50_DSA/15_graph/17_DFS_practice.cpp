// Find the length of the longest path in a matrix with consecutive characters

#include<bits/stdc++.h>
using namespace std;

int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int i, int j, int N, int M){
    return (i>=0 && i<N && j>=0 && j<M);
}

int maxLen(vector<vector<char>> mat, int i, int j, char previous){
    int N=mat.size();
    int M=mat[0].size();
    if(!isValid(i, j, N, M) || previous+1 != mat[i][j]){
        return 0;
    }
    int maxLength = 0;
    for(int k=0; k<8; k++){
        int len = maxLen(mat, i+row[k], j+col[k], mat[i][j]);
        maxLength = max(maxLength, 1+len);
    }
    return maxLength;
}

int findMaxLen(vector<vector<char>> mat, char ch){
    if(mat.size()==0){
        return 0;
    } 
    int M=mat.size();
    int N=mat[0].size();
    int maxLenth=0;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(mat[i][j]==ch){
                for(int k=0; k<8; k++){
                    int len = maxLen(mat, i+row[k], j+col[k], ch);
                    maxLenth = max(maxLenth, 1+len);
                }
            }
        }
    }
    return maxLenth;
}

int main(){
    vector<vector<char>> mat = 
    {
        {'D', 'E', 'H', 'X', 'B'},
        {'A', 'O', 'G', 'P', 'E'},
        {'D', 'D', 'C', 'F', 'D'},
        {'E', 'B', 'E', 'A', 'S'},
        {'C', 'D', 'Y', 'E', 'N'}
    };
    // Longest path is: C(2, 2) —> D(2, 1) —> E(3, 2) —> F(2, 3) —> G(1, 2) —> H(0, 2)
    // Size of longeset path is 6
    char ch = 'C';
    cout<<findMaxLen(mat, ch)<<endl;

    return 0;
}