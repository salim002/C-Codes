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
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    ll ans=0;
    // ans+=(v[n-1]-v[0]);
    // ll x=v[1];
    // for(ll i=n-2; i>=1; i--){
    //     if(v[i]!=v[n-1]){
    //         x=v[i];
    //         break;
    //     }
    // }
    // ll tmp = v[n-1]-x;
    // ans+=tmp;
    ll tmp=v[n-1]-v[0];
    for(ll i=1; i<n; i++){
        ans = max(ans, (abs(v[i]-v[i-1])+v[i]-v[0]));
    }
    ll res=0;
    for(ll i=0; i<n-1; i++){
        res = max(res, abs(v[i+1]-v[i])+abs(v[i]-v[n-1]));
    }
    // res+=(v[n-1]-v[0]);
    // ll y=v[n-2];
    // for(ll i=1; i<n-1; i++){
    //     if(v[i]!=v[0]){
    //         y=v[i];
    //         break;
    //     }
    // }
    // res+=(y-v[0]);
    cout<<max(ans, res)<<endl;
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