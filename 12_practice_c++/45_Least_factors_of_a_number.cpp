#include<bits/stdc++.h>
using namespace std;

const int N=1e7+5;
vector<int> prime(N);
void seive(){
    for(int i=0; i<N; i++){
        prime[i]=i;
    }
    for(int p=2; p<N; p++){
        if(prime[p]!=p){
            continue;
        }
        for(int d=2*p; d<N; d+=p){
            prime[d] = min(prime[d], p);
        }
    }
}
 
vector<int> leastFactors(int k){
    vector<int> v;
    while(k>1){
        if(v.empty() || v.back()!=prime[k]){
            v.push_back(prime[k]);
        }
        k/=prime[k];
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    seive();
    for(auto it:leastFactors(n)){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}