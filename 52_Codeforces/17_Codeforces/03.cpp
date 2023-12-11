#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solution(int arr[], int n, int k){
    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(s.find(arr[i]+k) != s.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, target;
        cin>>n>>target;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        solution(arr, n, target);
    };
}