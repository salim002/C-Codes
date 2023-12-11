#include<bits/stdc++.h>
using namespace std;

// int minCoin(int n, vector<int> v, vector<int> &dp){
//     if(n==0){
//         return 0;
//     }
//     int ans=INT_MAX;
//     for(int i=0; i<v.size(); i++){
//         if(n-v[i]>=0){
//             int subAns=0;
//             if(dp[n-v[i]]!=-1){
//                 subAns=dp[n-v[i]];
//             }
//             else{
//                 subAns = minCoin(n-v[i], v, dp);
//             }
//             if(subAns!=INT_MAX && subAns+1<ans){
//                 ans = 1+subAns;
//             }
//         }
//     }
//     return dp[n]=ans;
// }

int coinChange(vector<int>& coins, int target){
    vector<int>dp(target+1,100000);
    dp[0]=0;
    for(int i=0; i<coins.size(); i++){
        for(int j=coins[i]; j<=target; j++){
            dp[j] = min(dp[j], 1+dp[j-coins[i]]);
        }
    }
    if(dp[target]==100000){
        return -1;
    }
    return dp[target];  
}

int main(){
    vector<int> v = {7, 5, 1};
    int n;
    cin>>n;
    // vector<int> dp(n+1, -1);
    // dp[0]=0;
    // cout<<minCoin(n, v, dp)<<endl;
    // for(auto it:dp){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    cout<<coinChange(v, n)<<endl;

    return 0;
}