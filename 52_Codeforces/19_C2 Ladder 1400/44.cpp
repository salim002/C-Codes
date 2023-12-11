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

ll fun(vl &v, ll val){
    ll res=0;
    for(int i=1; i<v.size(); i++){
        res+=abs(v[i]-val);
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vl v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    for(int i=n-1; i>0; i--){
        ans+=(abs(v[i]-v[i-1]));
    }
    ll mx=abs(v[1]-v[0]);
    mx=max(mx, abs(v[n-1]-v[n-2]));
    for(int i=1; i<n-1; i++){
        mx=max(mx, abs(v[i]-v[i-1])+abs(v[i+1]-v[i])-abs(v[i+1]-v[i-1]));
    }
    ans-=mx;
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