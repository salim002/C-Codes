#include<bits/stdc++.h>
using namespace std;

void subseq(string p, string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    subseq(p+up[0], up.substr(1));
    subseq(p, up.substr(1));
}

vector<string> subseq2(string p, string up){
    if(up.empty()){
        vector<string> list;
        list.push_back(p);
        return list;
    }
    vector<string> left = subseq2(p+up[0], up.substr(1));
    vector<string> right = subseq2(p, up.substr(1));
    left.insert(left.end(), right.begin(), right.end());
    return left;
}

int main(){
    subseq("", "abc");
    // vector<string> list = subseq2("", "abc");
    // for(auto it:list){
    //     cout<<it<<", ";
    // }
    cout<<endl;
    return 0;
}