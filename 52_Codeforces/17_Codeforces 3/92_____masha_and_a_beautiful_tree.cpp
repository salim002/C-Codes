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
const ll M = 300000;
vl v(M, 0);

ll fun(ll l, ll r){
    if(r-l==1){
        return 0;
    }
    ll ans=0;
    ll mid = l+(r-l)/2;
    ll mx1 = *max_element(v.begin()+l, v.begin()+mid);
    ll mx2 = *max_element(v.begin()+mid, v.begin()+r);
    if(mx1>mx2){
        ans++;
        for(ll i=0; i<mid-l; i++){
            swap(v[l+i], v[mid+i]);
        }
    }
    return fun(l, mid)+fun(mid, r)+ans;
}

void solve(){
    ll m;
    cin>>m;
    for(ll i=0; i<m; i++){
        cin>>v[i];
    }
    if(is_sorted(v.begin(), v.begin()+m)){
        cout<<0<<endl;
        return;
    }
    ll ans=fun(0, m);
    if(is_sorted(v.begin(), v.begin()+m)){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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