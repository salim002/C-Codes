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

void solve(){
    int n;
    cin>>n;
    vi v(n-1);
    for(int i=0; i<n-1; i++){
        cin>>v[i];
    }
    if(is_sorted(all(v))){
        cout<<v[0]<<" ";
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<'\n';
        return;
    }
    vi tmp=v;
    reverse(all(tmp));
    if(is_sorted(all(tmp))){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<v[n-2];
        cout<<'\n';
        return;
    }
    vi ans(n);
    ans[0]=v[0];
    for(int i=1; i<n-1; i++){
        ans[i]=min(v[i-1], v[i]);
    }
    ans[n-1]=v[n-2];
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<'\n';
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