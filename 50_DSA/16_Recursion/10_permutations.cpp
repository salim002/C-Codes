#include<bits/stdc++.h>
using namespace std;

void permutation(string p, string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    char ch = up[0];
    for(int i=0; i<=p.size(); i++){
        string f = p.substr(0, i);
        string s = p.substr(i, p.size());
        permutation(f+ch+s, up.substr(1));
    }
}

vector<string> permutationList(string p, string up){
    vector<string> ans;
    if(up.empty()){
        ans.push_back(p);
        return ans;
    }
    char ch = up[0];
    for(int i=0; i<=p.size(); i++){
        string f = p.substr(0, i);
        string s = p.substr(i, p.size());
        vector<string> temp = permutationList(f+ch+s, up.substr(1));
        ans.insert(ans.end(), temp.begin(), temp.end());
    }
    return ans;
}

int permutationsCount(string p, string up){
    if(up.empty()){
        return 1;
    }
    int count=0;
    char ch = up[0];
    for(int i=0; i<=p.size(); i++){
        string f = p.substr(0, i);
        string s = p.substr(i, p.size());
        count = count + permutationsCount(f+ch+s, up.substr(1));
    }
    return count;
}

int main(){
    permutation("", "abc");
    // // vector<string> list = permutationList("", "abc");
    // // for(auto it:list){
    // //     cout<<it<<", ";
    // // }
    // // cout<<endl;
    // cout<<permutationsCount("", "abc")<<endl;
    return 0;
}