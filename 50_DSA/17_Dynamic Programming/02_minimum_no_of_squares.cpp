#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2, MOD = 1e9+7;
vector<int> dp(N, MOD);

// int minSquare(int n){   // Simple recursive solution;
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     int ans=MOD;
//     for(int i=1; i*i<=n; i++){
//         ans = min(ans, 1+minSquare(n-i*i));
//     }
//     return ans;
// }

// int minSquare(int n){  // Solution using DP
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     if(dp[n]!=MOD){
//         return dp[n];
//     }
//     for(int i=1; i*i<=n; i++){
//         dp[n] = min(dp[n], 1+minSquare(n-i*i));
//     }
//     return dp[n];
// }


// More fast solution
const int N=1e4+5, MOD=1e9+5;
int numSquares(int n){
    vector<int> v(N, -1);
    return solve(n, v);
}

int solve(int n, vector<int> &dp){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=1; i*i<=n; i++){
        ans = min(ans, 1+solve(n-i*i, dp));
    }
    return dp[n]=ans;
}

int main(){
    int n;
    cin>>n;
    cout<<numSquares(n)<<endl;
    return 0;
}