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

ll fun(ll n, ll a, ll b, ll c, vl dp){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    ll x=1+fun(n-a, a, b, c, dp);
    ll y=1+fun(n-b, a, b, c, dp);
    ll z=1+fun(n-c, a, b, c, dp);
    return dp[n]=max(x, max(y, z));
}

void solve(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0; i*a<=n; i++){
        for(int j=0; j*b<=n; j++){
            int k = n-a*i-b*j;
            if(k%c==0 && k>=0){
                ans = max(ans, i+j+(n-a*i-b*j)/c);
            }
        }
    }
    cout<<ans<<'\n';
}

int main(){
    fast_io
    // int t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}