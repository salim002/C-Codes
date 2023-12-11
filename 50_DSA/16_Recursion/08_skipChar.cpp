#include<bits/stdc++.h>
using namespace std;

void skip(string p, string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    if(up[0]=='a'){
        skip(p, up.substr(1));
    }
    else{
        skip(p+up[0], up.substr(1));
    }
}

int main(){
    string s;
    cin>>s;
    // To skip the character 'a'
    skip("", s);
    return 0;
}