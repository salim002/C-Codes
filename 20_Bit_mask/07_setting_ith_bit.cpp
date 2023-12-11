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
    int n=11;
    int i;
    cin>>i;
    printBinary(n);
    n = n | (1<<i);
    printBinary(n);
    return 0;
}