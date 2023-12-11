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
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll n;
    cin>>n;
    vl v(n), p(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    p[0]=v[0];
    for(ll i=1; i<n; i++){
        p[i] = v[i]+p[i-1];
    }
    map<ll, ll> m;
    ll ans=0, mx=0;
    for(ll i=n-1; i>=0; i--){
        m[p[i]]++;
        mx = max(mx, m[p[i]]);
        if(v[i]==0){
            ans+=mx;
            mx=0;
            m.clear();
        }
    }
    ans += m[0];
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