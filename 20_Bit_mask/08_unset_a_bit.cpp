#include<bits/stdc++.h>
using namespace std;

void printBinary(int n){
    // Printing in 8 bit 
    for(int i=7; i>=0; i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

int main(){
    // ~ sign is called 'Tilda'
    int n=11; 
    // printBinary(n);
    // printBinary(~n);

    // If we have to unset 1st bit(secont from left), then
    // printBinary(~(1<<1));
    // printBinary(n & (~(1<<1)));

    n = n & (~(1<<1));
    printBinary(n);
    return 0;
}