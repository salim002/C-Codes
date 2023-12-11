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
    map<ll, ll> mn, mx;
    ll inf=1e15;
    ll left=inf, right=-1, leftCost=inf, rightCost=inf, mxLength=0, mxCost=inf;
    for(ll i=0; i<n; i++){
        ll l, r, c;
        cin>>l>>r>>c;
        if(l<left){
            left=l;
            leftCost=inf;
        }
        if(l==left) leftCost=min(leftCost, c);
        if(r>right){
            right=r;
            rightCost=inf;
        }
        if(r==right) rightCost=min(rightCost, c);
        if(r-l+1>mxLength){
            mxLength=r-l+1;
            mxCost=inf;
        }
        if(r-l+1==mxLength) mxCost=min(mxCost, c);
        ll res = leftCost+rightCost;
        if(right-left+1==mxLength) res=min(res, mxCost);
        cout<<res<<'\n';
    }
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