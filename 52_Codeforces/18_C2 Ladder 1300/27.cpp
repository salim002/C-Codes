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
    ll n, k;
    cin>>n>>k;
    priority_queue<int> pq1, pq2;
    ll mx=0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x>=0){
            pq1.push(x);
        }
        else{
            pq2.push(abs(x));
        }
        mx=max(mx, abs(x));
    }
    ll ans=0;
    while(!pq1.empty()){
        ll cnt=k;
        ll tmp=pq1.top();
        while(!pq1.empty() && cnt--){
            pq1.pop();
        }
        ans+=tmp;
    }
    while(!pq2.empty()){
        ll cnt=k;
        ll tmp=pq2.top();
        while(!pq2.empty() && cnt--){
            pq2.pop();
        }
        ans+=tmp;
    }
    ans*=2;
    ans-=mx;
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