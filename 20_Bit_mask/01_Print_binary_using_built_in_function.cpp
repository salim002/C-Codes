#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=36;
    int m=-n;
    int x=~n;
    bitset<8> s1(n);
    bitset<8> s2(m);
    bitset<8> s3(x);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    // int n;
    // cin>>n;
    // string s = bitset<32> (n).to_string();
    // cout<<s<<endl;
    return 0;
} 

