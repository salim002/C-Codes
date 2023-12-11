#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

void remove_duplicate(string &str){
    int n = str.size();
    char str2[n];
    map<char, int> m;
    int j=0;
    for(int i=0; i<n; i++){
        if(!m[str[i]]){
            str2[j++] = str[i];
            m[str[i]]++;
        }
    }
    str2[j]='\0';
    str = str2;
    // set<char> s(str2, str2+n); //Note: we can't add string str directly to the set, first we have to make a charactor arry (eg: str2)
    // int i=0;
    // for(auto it:s){
    //     str2[i++] = it;
    // }
    // str2[i] = '\0';
    // str = str2;
    // return str2;
}
int main(){
    string str;
    getline(cin, str);
    // cout<<remove_duplicate(str)<<endl;
    cout<<str<<endl;
    remove_duplicate(str);
    cout<<str<<endl;
    // char str[] = "geeksforgeeks";
    // int n = sizeof(str)/sizeof(str[0]);
    // cout<<remove_duplicate(str, n)<<endl;
    return 0;
}