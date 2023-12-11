#include<iostream>
using namespace std;

void printReverse(string s){
    if(s.size() == 0){
        return;
    }
    printReverse(s.substr(1));
    cout<<s[0];
}

int main(){
    string s;
    getline(cin, s);
    printReverse(s);
    
    return 0;
}