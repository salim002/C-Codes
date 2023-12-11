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
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll M = 998244353;

ll mul(ll a, ll b){
    return (a*b)%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = (res*a)%M;
        }
        b = b>>1;
        a = (a*a)%M;
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = (res*i)%M;
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    // return (fac(n))/((fac(r)) * fac(n-r));
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}


void fun(ll n, vector<vector<ll>> &dp){
    if(n==2){
        return;
    }
    fun(n-2, dp);
    dp[n][0] = (nCr(n-1, n/2)) + (dp[n-2][1]%M);
    dp[n][1] = (nCr(n-2, n/2)) + (dp[n-2][0]%M);
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> dp(n+1, vector<ll>(2, -1));
    dp[2][0]=1;
    dp[2][1]=0;
    fun(n, dp);
    cout<<dp[n][0]%M<<" "<<dp[n][1]%M<<" "<<1<<endl;
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