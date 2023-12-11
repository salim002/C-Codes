#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printBeautifulPair(int arr[], int n){
    if(n==1){
        cout<<1<<" "<<1<<endl;
        return;
    }
    int arr2[n];
    for(int i=0; i<n; i++){
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    for(int i=0; i<n; i++){
        if(arr[i]==arr2[0]){
            cout<<i+1<<" ";
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==arr2[n-1]){
            cout<<i+1<<endl;
            break;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        printBeautifulPair(arr, n);
    }
    return 0;
}