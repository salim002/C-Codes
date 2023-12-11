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
    ll n, i;
    cin>>n;
    vl a(n), b(n);
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    vector<pair<ll, ll>> v;
    for(i=0; i<n; i++){
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end(), [&](pair<ll, ll> i, pair<ll, ll> j){
        return i.second<j.second;
    });
    ll ans=0;
    for(auto it:v){
        ans+=it.first;
        ans+=it.second;
    }
    ans-=v[n-1].second;
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