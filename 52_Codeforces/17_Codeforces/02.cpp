// Wrong

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    long long int f=1;
    for(int i=1; i<=n; i++){
        f = f*i;
        f = f%998244353;
    }
    return f;
}

long long int bp(int n){
    if(n%2==1){
        return 0;
    }
    else{
        return (factorial(n/2) * factorial(n/2))%998244353;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<bp(n)<<endl;
    }
    return 0;
}