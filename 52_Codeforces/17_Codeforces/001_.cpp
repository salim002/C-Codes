#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll M = 998244353;

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = (res*a)%M;
        }
        b = b>>1;
        a = (a*a)%M;
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = (res*i)%M;
    }
    return res;
}

ll dv(ll a, ll b){  // modDivision
    return (a*modPower(b, M-2))%M;
}

ll nCr(ll n, ll r){
    // return (fac(n))/((fac(r)) * fac(n-r));
    return dv(fac(n), (fac(r)*fac(n-r))%M);
}

void solve(){
    
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}