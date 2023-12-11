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

pair<ld, ld> check(pair<ld, ld> &p, pair<ld, ld> q){
    if(q.second>p.first && q.first<p.second){
        return {max(q.first, p.first), min(q.second, p.second)};
    }
    return {-1, -1};
}

void solve(){
    ll n;
    cin>>n;
    vd a(n), b(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    ld ans=0, low=0, high = 2e8+5;
    ll itrs = 100;
    while(itrs--){
        bool ok=true;
        pair<ld, ld> p = {0, 1e8};
        ld mid = low + (high-low)/2;
        for(ll i=0; i<n; i++){
            if(b[i]>mid){
                ok=false;
                break;
            }
            ld dif = mid-b[i];
            pair<ld, ld> q = {a[i]-dif, a[i]+dif};
            p = check(p, q);
            if(p.first==-1){
                ok=false;
                break;
            }
        }
        if(ok){
            ans = (p.first+p.second)/2;
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<setprecision(12)<<fixed<<ans<<endl;
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