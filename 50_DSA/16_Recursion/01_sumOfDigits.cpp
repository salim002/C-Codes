#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumOfDigits(n/10);
}

int productOfDigits(int n){
    if(n%10==n){
        return n;
    }
    return (n%10)*productOfDigits(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n)<<endl;
    cout<<productOfDigits(n)<<endl;
}