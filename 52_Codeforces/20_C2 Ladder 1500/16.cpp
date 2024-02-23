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
    int n, k;
    cin>>n>>k;
    if(k==n-1 && n==4){
        cout<<-1<<'\n';
        return;
    }
    if(k==0){
        for(int i=0; i<n/2; i++) cout<<i<<" "<<n-1-i<<'\n';
        return;
    }
    if(k==n-1){
        cout<<0<<" "<<2<<'\n';
        cout<<1<<" "<<n-3<<'\n';
        cout<<n-2<<" "<<n-1<<'\n';
        for(int i=3; i<n/2; i++) cout<<i<<" "<<n-1-i<<'\n';
    }
    else{
        cout<<0<<" "<<n-1-k<<'\n';
        cout<<k<<" "<<n-1<<'\n';
        for(int i=1; i<n/2; i++){
            if(i==k || i==n-1-k) continue;
            cout<<i<<" "<<n-1-i<<'\n';
        }
    }
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