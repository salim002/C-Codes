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

const int mod = 1e9+7;
const ll M = 998244353;

int mul(int a, int b){
    return (1LL*a*b)%mod;
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

int add(int a, int b){
    a+=b;
    if(a>=b){
        a-=mod;
    }
    return a;
}

int sub(int a, int b){
    return add(a, mod-b);
}

void solve(){
    ll n;
    cin>>n;
    ll ans = (4*n*n)%mod;
    ll k = (3*n-1)%mod;
    ans += k;
    ans = (ans*n)%mod;
    cout<<(ans*337)%mod<<endl;;
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