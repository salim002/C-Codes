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
    ll n;
    cin>>n;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    for(ll i=0; i<n; i++){
        if(v[i]>0){
            ll j=i+1;
            ll mx = v[i];
            while(j<n && v[j]>0){
                mx = max(mx, v[j]);
                j++;
            }
            v[i]=mx;
            i=j-1;
        }
        else{
            ll j=i+1;
            ll mx = v[i];
            while(j<n && v[j]<0){
                mx = max(mx, v[j]);
                j++;
            }
            v[i]=mx;
            i=j-1;
        }
    }
    vl a;
    a.push_back(v[0]);
    for(ll i=1; i<n; i++){
        if(v[i]*v[i-1]<0){
            a.push_back(v[i]);
        }
    }
    ll ans=0;
    for(auto it:a){
        // cout<<it<<" ";
        ans+=it;
    }
    cout<<ans<<endl;
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