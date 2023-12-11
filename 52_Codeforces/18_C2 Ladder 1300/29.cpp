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

bool check(vector<pair<ll, vector<ll>>> a, ll mid){
    ll k=mid;
    for(auto it:a){
        for(auto i:it.second){
            if(k>i){
                k++;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vector<vl> v;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        vl tmp;
        while(x--){
            ll y;
            cin>>y;
            tmp.push_back(y);
        }
        v.push_back(tmp);
    }
    vector<pair<ll, vector<ll>>> a;
    for(auto it:v){
        ll mx=0;
        for(ll i=0; i<it.size(); i++){
            mx=max(mx, it[i]-i);
        }
        a.push_back({mx, it});
    }
    sort(all(a));
    ll l=0, r=1e18, mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(check(a, mid)){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<r<<'\n';
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