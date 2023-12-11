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
    ll n, k, x;
    cin>>n>>k>>x;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    vl a;
    ll ans=1;
    for(ll i=1; i<n; i++){
        if((v[i]-v[i-1])>x){
            ll tmp=(v[i]-v[i-1]-1)/x;
            a.push_back(tmp);
        }
    }
    sort(all(a));
    // for(auto it:a){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(ll i=0; i<a.size(); i++){
        if(a[i]<=k){
            k-=a[i];
        }
        else{
            ans = a.size()-i+1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast_io
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}