#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=12;
    bitset<32> s1(n);
    cout<<s1<<endl;
    bitset<32> s2(-n);
    cout<<s2<<endl;
    int last_set_bit = n&(-n);
    cout<<last_set_bit<<endl;

    return 0;
}