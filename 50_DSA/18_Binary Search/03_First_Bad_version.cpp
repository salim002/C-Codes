// Leetcode

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isBadVersion(int version);

    int firstBadVersion(int n){
        long long l=0, r=n-1, mid;
        while(l<=r){
            mid=(l+r)/2;
            if(isBadVersion(mid)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};

int main(){

    return 0;
}