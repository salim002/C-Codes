// count the number of subarrays in a given array v that have a bitwise XOR equal to a given value m.

#include<bits/stdc++.h>
using namespace std;

int count(vector<int> p, int m){
    int cnt=0;
    map<int, int> mp;
    for(int i=0; i<p.size(); i++){
        if(p[i]==m){
            cnt++;
        }
        cnt+=mp[m^p[i]];
        mp[p[i]]++;
    }
    return cnt;
}

int main(){
    vector<int> v = {4, 0, 4, 0};
    int m = 4;
    int n=v.size();
    vector<int> p(n);
    p[0]=v[0];
    for(int i=1; i<n; i++){
        p[i] = p[i-1]^v[i];
    }
    cout<<count(p, m)<<endl;
    return 0;
}