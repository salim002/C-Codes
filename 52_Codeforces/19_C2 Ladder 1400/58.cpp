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

// ll fun(int curr, int idx, vi a, vi b, int n, vector<vi> &dp){
//     if(idx>=n) return 0;
//     if(dp[curr][idx]!=-1) return dp[curr][idx];
//     int notTake = fun(curr, idx+1, a, b, n, dp);
//     int take = (curr?b[idx]:a[idx]);
//     take += fun(curr^1, idx+1, a, b, n, dp);
//     return dp[curr][idx]=max(notTake, take);
// }

void solve(){
    ll n;
    cin>>n;
    vi a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    // vector<vi> dp(2, vi(n+1));
    ll curr_top=0, curr_down=0, prev_top=0, prev_down=0;
    for(int i=n-1; i>=0; i--){
        // dp[0][i]=max(dp[0][i+1], a[i]+dp[1][i+1]);
        // dp[1][i]=max(dp[1][i+1], b[i]+dp[0][i+1]);
        curr_top=max(prev_top, a[i]+prev_down);
        curr_down=max(prev_down, b[i]+prev_top);
        prev_top=curr_top;
        prev_down=curr_down;
    }
    // for(auto it:dp){
    //     for(auto i:it) cout<<i<<" ";
    //     cout<<'\n';
    // }
    cout<<max(curr_top, curr_down)<<'\n';
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