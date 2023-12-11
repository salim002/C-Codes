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
    ll n, m;
    cin>>n>>m;
    // map<ll, ll> mp;
    vl p(n+1);
    while(m--){
        ll a, b, c;
        cin>>a>>b>>c;
        p[b]++;
    }
    vl v;
    for(ll i=1; i<=n; i++){
        if(p[i]==0){
            v.push_back(i);
        }
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(ll i=1; i<=n; i++){
        if(i==v[0]){
            continue;
        }
        cout<<v[0]<<" "<<i<<endl;
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