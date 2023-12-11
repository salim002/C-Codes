// Check whether the ith bit is set or not in a binary number;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=11;
    int i=0;  //First bit from left side is 0th bit, second bit is 1st bit and so on
    if((n&(1<<i))!=0){
        cout<<"Set bit"<<endl;
    }
    else{
        cout<<"Not set bit"<<endl;
    }
    return 0;
}