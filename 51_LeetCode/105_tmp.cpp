#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> adj_list(n);
        vector<int> dp(n);
        priority_queue<int> pq;
        for(auto it:values){
            pq.push(it);
        }
        // vector<int> cnt(k);
        vector<int> indegree(n);
        vector<bool> vis(n);
        for(int i=1; i<n; i++){
            dp[i]=1;
        }
        queue<int> q;
        int ans = 0;
        for(auto it: edges){
            adj_list[it[0]].push_back(it[1]);
            adj_list[it[1]].push_back(it[0]);
            indegree[it[0]]++;
            indegree[it[1]]++;
        }
        for(int i=1; i<n; i++){
            if(indegree[i]==1){
                q.push(i);
                vis[i]=true;;
            }
        }
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(values[curr]==0){
                ans++;
            }
            else if(values[curr]%k==0){
                ans++;
            }
            for(auto it:adj_list[curr]){
                if(it==0){
                    continue;
                }
                if(!vis[it]){
                    if(values[curr]%k!=0 || values[curr]==0){
                        values[it]+=values[curr];
                    }
                    indegree[it]--;
                    if(indegree[it]>1){
                        continue;
                    }
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
        ans++;
        return max(1, ans);
    }
};

int main(){

    return 0;
}