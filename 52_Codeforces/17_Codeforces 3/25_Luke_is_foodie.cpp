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
    ll n, m, i;
    cin>>n>>m;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0, mn=v[0], mx=v[0];
    for(i=1; i<n; i++){
        ll x=abs(v[i]-mn);
        ll y=abs(v[i]-mx);
        if(x>2*m || y>2*m){
            ans++;
            mn=v[i];
            mx=v[i];
        }
        mn=min(mn, v[i]);
        mx=max(mx, v[i]);
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