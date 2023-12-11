#include<iostream>
#include<vector>
using namespace std;

void print_reverse(string s){
    vector<string> v;
    string temp = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            v.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    v.push_back(temp);
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
} 

int main(){
    string s;
    getline(cin, s);
    print_reverse(s);
    return 0;
}