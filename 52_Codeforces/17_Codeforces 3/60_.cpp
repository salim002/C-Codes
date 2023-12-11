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

void solve(){
    ll n, i, j;
    cin>>n;
    vl v(n);
    map<ll, ll> mp1, mp2;
    for(i=0; i<n; i++){
        cin>>v[i];
        mp1[v[i]]=i+1;
        mp2[v[i]]=i+1;
    }
    ll ans=-1;
    for(auto it1:mp1){
        for(auto it2:mp2){
            if(__gcd(it1.first, it2.first)==1){
                ans=max(ans, it1.second+it2.second);
            }
        }
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