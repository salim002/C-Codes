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

int fun(int curr, vector<pair<ll, ll>> &v, string &s) {
    if(curr == -1) return 1e9;
    if (v[curr] == make_pair(-1LL, -1LL)) return 0;
    int left = fun(v[curr].first, v, s);
    int right = fun(v[curr].second, v, s);
    int res=0;
    if(s[curr]=='L') res = min(left, right + 1);
    else if (s[curr]=='R') res=min(right, left + 1);
    else res = 1+min(left, right);
    return res;
}

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<ll, ll>> v(n);
    vector<bool> a(n);
    vi vec;
    for(int i=0; i<n; i++){
        ll x, y;
        cin>>x>>y;
        v[i] = {x-1, y-1};
        if(x==0 && y==0) a[i]=true;
    }
    for(int i=1; i<=n; i++) vec.push_back(i);
    ll ans=fun(0, v, s);
    cout<<ans<<'\n';
}

int32_t main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}