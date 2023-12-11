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
    ll n, q, i;
    cin>>n>>q;
    vl v(n), p(n), a(n, 0), b(q);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<q; i++){
        cin>>b[i];
    }
    p[0]=v[0];
    a[0]=v[0];
    for(i=1; i<n; i++){
        p[i]=v[i]+p[i-1];
        a[i]=max(v[i], a[i-1]);
    }
    for(i=0; i<q; i++){
        ll temp = upper_bound(a.begin(), a.end(), b[i])-a.begin();
        // cout<<temp<<" ";
        if(temp==0){
            cout<<0<<" ";
            continue;
        }
        cout<<p[temp-1]<<" ";
    }
    cout<<endl;
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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