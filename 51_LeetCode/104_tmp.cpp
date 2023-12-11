#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeAlmostEqualCharacters(string s) {
        int n=s.size(), ans=0;
        for(int i=1; i<n; i++){
            if(abs(s[i]-s[i-1])<=1){
                int j=i, cnt=1;
                while(j<n && abs(s[j]-s[j-1])<=1){
                    cnt++;
                    j++;
                }
                ans+=(cnt/2);
                i=j;
            }
        }
        return ans;
    }
};

int main(){


    return 0;
}