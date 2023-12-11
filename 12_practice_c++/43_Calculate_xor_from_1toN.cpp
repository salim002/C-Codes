// This is the efficient method to calculate xor from 1 to n
// 1^2^3^4..........(n-2)^(n-1)^n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int xor_value;
    if(n%4==0){
        xor_value=n;
    }
    else if(n%4==1){
        xor_value=1;
    }
    else if(n%4==2){
        xor_value=n+1;
    }
    else{
        xor_value=0;
    }
    cout<<xor_value<<endl;
}