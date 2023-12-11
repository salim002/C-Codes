#include<bits/stdc++.h>
using namespace std;

int countZeros(int n, int cnt){
    if(n==0){
        return cnt;
    }
    if(n%10==0){
        return countZeros(n/10, cnt+1);
    }
    return countZeros(n/10, cnt);
}

int main(){
    int n;
    cin>>n;
    cout<<countZeros(n, 0)<<endl;
    return 0;
}