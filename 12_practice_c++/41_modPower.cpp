#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 998244353;

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%mod;
    ll res=1;
    while(b>0){
        if(b&1){
            res = (res*a)%mod;
        }
        b = b>>1;
        a = (a*a)%mod;
    }
    return res;
}

ll dv(ll a, ll b){  // modDivision
    return (a*modPower(b, mod-2))%mod;
}

int main(){
    // cout<<modPower(12344345343434, 276734)<<endl;
    // cout<<modPower(2, 6)<<endl;
    // cout<<dv(16, 2)<<endl;
    // cout<<(16*modPower(2, mod-2))%mod<<endl;
    return 0;
}