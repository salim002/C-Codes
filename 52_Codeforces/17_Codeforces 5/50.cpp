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

vl factors(ll n){
    vl res;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            res.push_back(i);
            if(n / i != i) res.push_back(n / i);
        }
    }
    return res;
}


void solve(){
    ll n;
    cin>>n;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    vl p=factors(n);
    // for(auto it:p) cout<<it<<" ";
    // cout<<'\n';
    ll ans=0;
    for(auto it:p){
        ll mn=1e17+5, mx=1, sum=0, cnt=0;
        for(ll i=0; i<n; i++){
            sum+=v[i];
            cnt++;
            if(cnt==it){
                mx=max(mx, sum);
                mn=min(mn, sum);
                cnt=0;
                sum=0;
            }
        }
        ans=max(ans, mx-mn);
    }
    cout<<ans<<'\n';
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