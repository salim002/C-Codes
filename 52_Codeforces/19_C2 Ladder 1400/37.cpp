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
    ll n;
    cin>>n;
    vl a(n), b(n), p(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    vector<pair<ll, ll>> v;
    for(int i=0; i<n; i++){
        v.push_back({a[i], b[i]});
    }
    sort(all(v));
    p[n-1]=v[n-1].second;
    for(int i=n-2; i>=0; i--){
        p[i]=v[i].second+p[i+1];
    }
    // cout<<'\n';
    // for(auto it:v){
    //     cout<<it.first<<" ";
    // }
    // cout<<'\n';
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    ll ans=v[n-1].first, right=0;
    for(int i=n-1; i>=0; i--){
        if(v[i].first>=p[i]){
            ans=v[i].first;
            right=p[i];
        }
        else{
            ans=max(v[i].first, right);
            break;
        }
    }
    ans=min(ans, p[0]);
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