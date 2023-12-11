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
    ll n, m;
    cin>>n>>m;
    vl v(n), p(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    p[0]=v[0];
    for(ll i=1; i<n; i++){
        p[i]=v[i]+p[i-1];
    }
    if(*min_element(all(p))==p[m-1]){
        cout<<0<<'\n';
        return;
    }
    ll ans=0, curr=p[m-1];
    priority_queue<ll> mx_pq;
    for(ll i=m-1 ; i>=0 ; --i){
        while(p[i]<curr){
            curr -= 2*mx_pq.top();
            mx_pq.pop();
            ans++;
        }
        mx_pq.push(v[i]);
    }
    curr=p[m-1];
    priority_queue<ll, vector<ll>, greater<ll>> mn_pq;
    for(ll i=m ; i<n ; ++i){
        mn_pq.push(v[i]);
        while(p[i]<curr){
            curr += 2*mn_pq.top();
            mn_pq.pop();
            ans++;
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