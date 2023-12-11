// Program to find whether a given number is power of 2

#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n){
    return n && !(n & (n-1));
}

int main(){
    int n;
    cin>>n;
    if(isPowerof2(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}