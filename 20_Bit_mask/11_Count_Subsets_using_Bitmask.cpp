#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun(int curr, int idx, int dist, vector<int> &v, int n, int &ans){
        if(idx==n-1){
            ans=max(ans, dist);
        }
        for(int i=idx+1; i<n; i++){
            if(v[i]>v[idx]){
                fun(v[i], i, dist+1, v, n, ans);
            }
        }
    }
    int lengthOfLIS(vector<int> &v){
        int ans=INT_MIN, n=v.size();
        fun(v[0], 0, 1, v, n, ans);
    }
};

int main(){
    return 0;
}