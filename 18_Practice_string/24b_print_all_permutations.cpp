#include<bits/stdc++.h>
using namespace std;

void printAllPermutations(string s, string temp){
    if(temp.size()==s.size()){
        cout<<temp<<'\t';
        return;
    }
    for(int i=0; i<s.size(); i++){
        temp.push_back(s[i]);
        printAllPermutations(s, temp);
        temp.pop_back();
    }
}

int main(){
    printAllPermutations("abc", "");
    return 0;
}