// Program to write a function that returns the Run Length Encoded string for the input string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void run_length_encoded(string s){
    int n = s.size();
    for(int i=0; i<n; i++){
        int count = 1;
        while(i<n-1 && s[i]==s[i+1]){
            count++;
            i++;
        }
        cout<<s[i]<<count;
    }
}

int main(){
    string s;
    cin>>s;
    run_length_encoded(s);
    return 0;
}