#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int x=0, y=0, n=nums1.size(), m=nums2.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i]==nums2[j]){
                    x++;
                    break;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(nums2[i]==nums1[j]){
                    y++;
                    break;
                }
            }
        }
        return {x, y};
    }
};

int main(){

    return 0;
}