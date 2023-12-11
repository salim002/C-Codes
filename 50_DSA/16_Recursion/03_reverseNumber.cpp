#include<bits/stdc++.h>
using namespace std;

int sum=0;

void reverse(int n){
    if(n==0){
        return;
    }
    int rem = n%10;
    sum = sum*10+rem;
    reverse(n/10);
}

int helper(int n, int dig){
    if(n%10==n){
        return n;
    }
    int rem = n%10;
    return rem*pow(10, dig-1) + helper(n/10, dig-1);
}

int rev2(int n){
    int dig = log10(n)+1;
    return helper(n, dig);
}

bool isPalindrome(int n){
    return n==rev2(n);
}

int main(){
    int n;
    cin>>n;
    // reverse(n);
    // cout<<sum<<endl;
    // cout<<rev2(n)<<endl;
    cout<<isPalindrome(n)<<endl;
    return 0;
}