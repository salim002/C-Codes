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

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return n*(n-1)/2;
}


void solve(){
    ll n, m;
    cin>>n>>m;
    ll mx = nCr(n-m+1, 2);
    ll tmp=n/m, mn=0;
    ll rem=n%m;
    if(tmp>=2){
        mn+=(m-rem)*nCr(tmp, 2);
    }
    mn+=(rem*nCr(tmp+1, 2));
    cout<<mn<<" "<<mx<<'\n';
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