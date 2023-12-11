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
    ll n, i;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    if(is_sorted(all(v))){
        cout<<0<<endl;
        return;
    }
    vector<pair<ll, ll>> p;
    p.push_back({1, n});
    ll tmp=v[0]+v[n-1];
    if(tmp%2){
        v[n-1]=v[0];
    }
    else{
        v[0]=v[n-1];
    }
    for(i=1; i<n-1; i++){
        ll tmp=v[0]+v[i];
        if(tmp%2){
            p.push_back({1, i+1});
        }
        else{
            p.push_back({i+1, n});
        }
    }
    cout<<p.size()<<endl;
    for(auto it:p){
        cout<<it.first<<" "<<it.second<<endl;
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