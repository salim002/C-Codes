#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; 
    cin>>a>>b; 
    // cout<<ceil(a/b)<<endl; // Prints simply a/b because this function works only for float
    cout<<a/b + (a%b!=0)<<endl; // 1st approach
    cout<<(a+b-1)/b<<endl; // 2nd approach
    return 0;
}