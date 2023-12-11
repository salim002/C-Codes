// Smallest power of 2 greater than or equal to n

#include<bits/stdc++.h>
using namespace std;

int nextPowerOfTwo(int n){
    if(n && !(n & (n-1))){
        return n;
    }
    int cnt=0;
    while(n!=0){
        n >>=1;
        cnt++;
    }
    return (1<<cnt);
}

int main(){
    int n;
    cin>>n;
    cout<<nextPowerOfTwo(n)<<endl;
    return 0;
}