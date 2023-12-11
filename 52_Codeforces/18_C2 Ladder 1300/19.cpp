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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

ll calc(ll n){
    ll res = n*(n+1)/2;
    return res;
}

void solve(){
    ll k, x;
    cin>>k>>x;
    ll l=1, r=2*k-1, mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(mid<=k){
            if(calc(mid)<x){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        else{
            ll tmp = calc(k)+calc(k-1)-calc(2*k-mid-1);
            if(tmp<x){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
    }
    cout<<l<<'\n';
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}