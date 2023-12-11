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
    int n;
    cin>>n;
    vi v(n), p(n, 1);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans=1;
    for(int i=2; i<=n; i++){
        if(v[i-1]>v[0]) p[i-1]++;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                if(v[i-1]>v[j-1]) p[i-1]=max(p[i-1], 1+p[j-1]);
                if(i/j!=i && v[i-1]>v[i/j-1]){
                    p[i-1]=max(p[i-1], 1+p[i/j-1]);
                }
            }
        }
        ans=max(ans, p[i-1]);
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