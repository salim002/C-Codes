// Given an integer N and an integer D, 
// rotate the binary representation of the integer N by D digits to the left as well as right 
// and return the results in their decimal representation after each of the rotation.
// Note: Integer N is stored using 16 bits. i.e. 12 will be stored as 0000000000001100.

#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(int n, int d){
    d=d%16;
    int l=((n<<d) | (n>>(16-d))) & 65535;
    int r=((n>>d) | (n<<(16-d))) & 65535;
    return {l,r};
}

int main(){

    return 0;
}