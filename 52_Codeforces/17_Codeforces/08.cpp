#include<bits/stdc++.h>
using namespace std;

void solve(long long int arr[], long long int n){
    if(n==1){
        if(arr[0]==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    sort(arr, arr+n, greater<int>());
    long long int i;
    for(i=0; i<n-1; i++){
        if((arr[i]-arr[i+1])>1){
            cout<<"NO"<<endl;
            return;
        }
        arr[i+1] = arr[i] - arr[i+1];
    }
    cout<<"YES"<<endl;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n], i;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        solve(arr, n);
    }
    return 0;
}