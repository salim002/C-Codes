// Program to count total number of set bits
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int num){
    int count = 0;
    while (num > 0) {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main(){
    int n=48;
    string s = bitset<32> (n).to_string();
    cout<<s<<endl;
    cout<<countSetBits(n)<<endl;
    int cnt = __builtin_popcount(n);
    cout<<cnt<<endl;

    // unsetting last set bits
    int x = n&(-n);
    int y = n^x;
    bitset<32> s2(y);
    cout<<s2<<endl;
    return 0;
}