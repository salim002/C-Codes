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

ll fun(ll n, ll m, ll x, ll y){
    if((x==1 && y==1) || (x==1 && y==m) || (x==n && y==1) || (x==n && y==1)){
        return ll(2);
    }
    if(x==1 || y==1 || x==n || y==m){
        return ll(3);
    }
    return ll(4);
}

void solve(){
    ll n, m;
    cin>>n>>m;
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    ll k=4, x=4;
    if(b==1 || b==m){
        if(a==1 || a==m){
            k=min(k, 2LL);
        }
        else{
            k=min(k, 3LL);
        }
    }
    if(a==1 || a==n){
        if(b==1 || b==m){
            k=min(k, 2LL);
        }
        else{
            k=min(k, 3LL);
        }
    }
    if(d==1 || d==m){
        if(c==1 || c==m){
            x=min(x, 2LL);
        }
        else{
            x=min(x, 3LL);
        }
    }
    if(c==1 || c==n){
        if(d==1 || d==m){
            x=min(x, 2LL);
        }
        else{
            x=min(x, 3LL);
        }
    }
    ll ans = min(k, x);
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