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

ll count(vi v, int m, int n){
    ll cnt=0;
    vi hashtable(4*n+5, 0);
    for(int i=0; i<v.size(); i++){
        if(v[i]==m){
            cnt++;
        }
        cnt+=hashtable[m^v[i]];
        hashtable[v[i]]++;
    }
    return cnt;
}

void solve(){
    int n;
    cin>>n;
    vi v(n), p(n), q;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    p[0]=v[0];
    for(int i=1; i<n; i++){
        p[i] = p[i-1]^v[i];
    }
    for(int i=0; i*i<=2*n; i++){
        q.push_back(i*i);
    }
    ll ans = 1LL*n*(n+1)/2;
    for(auto it:q){
        ans-=count(p, it, n);
    }
    cout<<ans<<endl;
    // for(auto it:q){
    //     cout<<it<<" ";
    // }
    // cout<<endl<<endl;
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