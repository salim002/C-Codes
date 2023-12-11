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

bool check(vi v1, vi v2){
    int cnt=0;
    for(int i=0; i<5; i++){
        if(v1[i]<v2[i]) cnt++;
    }
    return cnt>=3;
}

void solve(){
    int n, mx=50000;
    cin>>n;
    vector<vi> v;
    for(int i=0; i<n; i++){
        int a, b, c, d, e;
        cin>>a>>b>>c>>d>>e;
        v.push_back({a, b, c, d, e});
    }
    int curr=0;
    for(int i=1; i<n; i++){
        if(check(v[i], v[curr])){
            curr=i;
        }
    }
    for(int i=0; i<n; i++){
        if(i==curr) continue;
        if(check(v[i], v[curr])){
            cout<<-1<<'\n';
            return;
        }
    }
    cout<<curr+1<<'\n';
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