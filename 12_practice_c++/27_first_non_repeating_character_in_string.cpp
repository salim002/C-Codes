#include<iostream>
#include<map>
using namespace std;

void first_non_repeating_charactor(string s){
    for(int i=0; i<s.size(); i++){
        int count = 0;
        for(int j=0; j<s.size(); j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            cout<<s[i]<<endl;
            break;
        }
    }
}

int main(){
    string s;
    cin>>s;
    first_non_repeating_charactor(s);
    return 0;
}