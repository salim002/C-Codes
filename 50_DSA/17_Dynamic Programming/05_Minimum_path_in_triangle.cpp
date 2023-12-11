#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(int i,int j, int n, vector<vector<int>> &v, vector<vector<int>> &dp){
        if(i==n-1){
            return v[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left = v[i][j]+sum(i+1, j, n, v, dp);
        int right = v[i][j]+sum(i+1, j+1, n, v, dp);
        return dp[i][j] = min(left, right);
    }
    int minimumTotal(vector<vector<int>>& tri){
        int n=tri.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        return sum(0, 0, n, tri, dp);
    }
};

int main(){

    return 0;
}