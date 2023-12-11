#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int, int> mp;
        int ans=1, n=nums.size(), j=0;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
                int curr=nums[i];
                while(nums[j]!=curr){
                    mp[nums[j]]--;
                    j++;
                }
                mp[nums[j]]--;
                j++;
            }
            ans=max(ans, i-j+1);
        }
        return ans;
    }
};

int main(){
 
    return 0;
}