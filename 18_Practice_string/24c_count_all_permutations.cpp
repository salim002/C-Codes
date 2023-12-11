#include<bits/stdc++.h>
using namespace std;

int printAllPermutations(string s, string temp){
    if(temp.size()==s.size()){
        // cout<<temp<<'\t';
        return 1;
    }
    int count=0;
    for(int i=0; i<s.size(); i++){
        // if(i>0 && s[i]==s[i-1]){
        //     continue;
        // }
        temp.push_back(s[i]);
        count = count + printAllPermutations(s, temp);
        temp.pop_back();
    }
    return count;
}

int main(){
    cout<<printAllPermutations("abcd", "")<<endl;
    // cout<<printAllPermutations("abcc", "")<<endl;
    return 0;
}