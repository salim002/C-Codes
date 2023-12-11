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

ll mod=1e9+7;

ll myPow(ll x, ll n){
    if(n==0 || x==1){
        return 1;
    }
    if(x==0){
        return 0;
    }
    if(n%2==0){
        return myPow((x*x)%mod, n/2)%mod;
    }
    return (x*myPow((x*x)%mod, n/2))%mod;
}

void solve(){
    ll n;
    cin>>n;
    ll cnt=1;
    while(n--){
        cnt*=2;
    }
    cnt-=2;
    ll ans=myPow(ll(4), cnt);
    ans = (ans*6)%mod;
    cout<<ans<<'\n';
    // cout<<cnt<<'\n';
}

int main(){
    fast_io
    // int t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}