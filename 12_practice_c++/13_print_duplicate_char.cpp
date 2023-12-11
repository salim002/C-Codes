#include<iostream>
#include<map>
using namespace std;

void print_dups(string s){
    map<char, int> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if(it.second>1){
            if(it.first == ' '){
                cout<<"spaces"<<" - "<<it.second<<endl;
            }
            else{
                cout<<it.first<<" - "<<it.second<<endl;
            }
        }
    }
}

int main(){
    string str;
    getline(cin, str);
    print_dups(str);
    return 0;
}