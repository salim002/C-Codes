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
    ll n, k, i;
    cin>>n>>k;
    vl v(n+1, 0);
    for(i=1; i<=n; i++){
        cin>>v[i];
        v[i] += v[i-1];
    }
    ll ans=0;
    if(k<n){
        ll mx=v[k];
        for(i=k+1; i<=n; i++){
            mx=max(mx, v[i]-v[i-k]);
        }
        ans = mx+k*(k-1)/2;
    }
    else{
        ans = v[n]+n*(2*k-n-1)/2;
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