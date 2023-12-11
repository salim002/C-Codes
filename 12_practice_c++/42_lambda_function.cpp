#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>> v;
    v.push_back({2, 4});
    v.push_back({9, 3});
    v.push_back({2, 3});
    v.push_back({1, 7});
    v.push_back({5, 2});
    v.push_back({7, 9});
    v.push_back({2, 6});
    v.push_back({6, 3});
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // sort(v.begin(), v.end(), [&](pair<int, int> i, pair<int, int> j){
    //     if(i.second==j.second){
    //         return i.first<j.first;
    //     }
    //     return i.second>j.second;
    // });
    // cout<<endl;
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    cout<< [](int a, int b){return a+b;}(10, 15)<<endl;
    auto sum = [](int a, int b){return a+b;};
    cout<<sum(13, 12)<<endl;

    return 0;
}