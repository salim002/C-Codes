#include<bits/stdc++.h>
using namespace std;

vector<int> findAllIndex(vector<int> v, int target, int ind){
    vector<int> list;
    if(ind==v.size()){
        return list;
    }
    if(v[ind]==target){
        list.push_back(ind);
    }
    vector<int> ansFromBelowCalls = findAllIndex(v, target, ind+1);
    list.insert(list.end(), ansFromBelowCalls.begin(), ansFromBelowCalls.end());
    return list;
}

int main(){
    vector<int> v={4, 1, 4, 3, 2, 4, 4, 5};
    vector<int> ans = findAllIndex(v, 4, 0);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}