#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<long long> v(N);

// int fib(int n){  // Using recursion, time complexity = O(2^n)
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }

// long long fib(int n){  // Using memoization
//     if(n==1){
//         return v[0]=0;
//     }
//     if(n==2){
//         return v[1]=1;
//     }
//     if(!v[n]){
//         v[n]=fib(n-1)+fib(n-2);
//     }
//     return v[n];
// }

long double fib(int n){   // space optimized DP solution
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    long double p2=0;
    long double p1=1;
    long double curr;
    for(int i=3; i<=n; i++){
        curr=p1+p2;
        p2=p1;
        p1=curr;
    }
    return curr;
}

int main(){
    int n;
    cin>>n;
    // cout<<fib(n)<<endl;

    // Using DP, time complexity = O(n);
    // vector<long double> dp(n+1);
    // dp[1]=0;
    // dp[2]=1;
    // for(int i=3; i<=n; i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // cout<<dp[n]<<endl;

    cout<<fib(n)<<endl;

    return 0;
}