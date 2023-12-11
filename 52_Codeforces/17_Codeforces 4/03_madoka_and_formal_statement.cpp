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
    ll n;
    cin>>n;
    vl a(n), b(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    bool ok=true;
    ll cnt=0;
    for(ll i=0; i<n; i++){
        if(a[i]>b[i]){
            ok=false;
            break;
        }
    }
    for(ll i=0; i<n-1; i++){
        if(b[i]>b[i+1]+1 && b[i]!=a[i]){
            ok=false;
            break;
        }
    }
    if(b[n-1]>b[0]+1 && b[n-1]!=a[n-1]){
        ok=false;
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