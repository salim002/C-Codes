#include<bits/stdc++.h>
using namespace std;

vector<int> PrimeFactors(int n){
    n = abs(n);
    vector<int> v;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>2){
        v.push_back(n);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    for(auto it:PrimeFactors(n)){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}