#include<bits/stdc++.h>
using namespace std;

void printBinary(int n){
    for(int i=7; i>=0; i--){
        cout<<((n>>i) & 1);
    }
    cout<<endl;
}

int main(){
    int n=11;
    printBinary(n);
    cout<<__builtin_popcount(n)<<endl; // For int
    cout<<__builtin_popcountll((1LL<<35))<<endl;  // For long long
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
    return 0;
}