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
// const int mod = 998244353;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    ll n, i;
    cin>>n;
    vl a(n), b(n), c(n);
    ll ma =INT_MAX, mb =INT_MAX;
    for(i=0; i<n; i++){
        cin>>a[i];
        ma = min(ma, a[i]);
    }
    for(i=0; i<n; i++){
        cin>>b[i];
        mb = min(mb, b[i]);
    }
    ll ans=0;
    for(i=0; i<n; i++){
        ans += max(a[i]-ma, b[i]-mb);
    }
    cout<<ans<<endl<<endl;
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