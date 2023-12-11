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
    return ((a%mod)*(b%mod))%mod;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%mod;
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
    return mul(a, modPower(b, mod-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    int n, u, r, d, l;
    cin>>n>>u>>r>>d>>l;
    for(int i=0; i<16; i++){
        int U=u, R=r, D=d, L=l;
        if((i>>0)&1){
            U--; L--;
        }
        if((i>>1)&1){
            U--; R--;
        }
        if((i>>2)&1){
            R--; D--;
        }
        if((i>>3)&1){
            D--; L--;
        }
        if(U>=0 && U<=n-2 && R>=0 && R<=n-2 && D>=0 && D<=n-2 && L>=0 && L<=n-2){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
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