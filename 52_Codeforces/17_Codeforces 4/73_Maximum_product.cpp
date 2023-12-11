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
    vl v(n);
    bool ok=true;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>=0){
            ok=false;
        }
    }
    sort(all(v), [&](ll i, ll j){
        return abs(i)>abs(j);
    });
    if(ok){
        cout<<v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]<<'\n';
        return;
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    ll ans=v[0]*v[1]*v[2]*v[3]*v[4];
    if(ans>=0){
        cout<<ans<<'\n';
        return;
    }
    for(int i=5; i<n; i++){
        for(int j=0; j<5; j++){
            ll tmp=v[i];
            for(int k=0; k<5; k++){
                if(k!=j){
                    tmp*=v[k];
                }
            }
            ans = max(ans, tmp);
        }
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