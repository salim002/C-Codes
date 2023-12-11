#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &v, int target){
        int l=0, r=v.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]==target){
                return mid;
            }
            if(v[mid]>=v[l]){
                if(v[l]<=target && target<v[mid]){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(v[mid]<target && target<=v[r]){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }
        return -1;
    }
};
int main(){

    return 0;
}