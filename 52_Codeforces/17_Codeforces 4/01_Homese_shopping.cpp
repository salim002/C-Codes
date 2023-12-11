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
    ll n, x;
    cin>>n>>x;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    if(is_sorted(all(v))){
        cout<<"YES"<<endl;
        return;
    }
    if(x>=n){
        cout<<"NO"<<endl;
        return;
    }
    if(x<=n/2){
        cout<<"YES"<<endl;
        return;
    }
    ll k=2*(n-x);
    k = n-k;
    vl p(all(v));
    sort(all(p));
    ll y=n-x;
    bool ok=true;
    for(ll i=y; i<y+k; i++){
        if(v[i]!=p[i]){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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