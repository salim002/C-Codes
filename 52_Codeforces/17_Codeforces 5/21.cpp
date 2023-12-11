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

void solve(){
    ll n;
    cin>>n;
    vl v(n);
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll m;
    cin>>m;
    sort(all(v));
    for(ll i=0; i<m; i++){
        ll a, b;
        cin>>a>>b;
        ll idx=lower_bound(v.begin(), v.end(), a)-v.begin();
        ll ans=2e18;
        if(idx>0){
            ans = min(ans, a-v[idx-1]+max(0LL, b-(sum-v[idx-1])));
        }
        if(idx<n){
            ans = min(ans, max(0LL, b-(sum-v[idx])));
        }
        cout<<ans<<'\n';
    }
}

int main(){
    fast_io
    solve();
    // int t;
    // cin>>t;
    // while(t--){
    // }
    return 0;
}