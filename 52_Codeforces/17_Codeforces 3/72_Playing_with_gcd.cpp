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

ll lcm(ll a, ll b){
    ll g=__gcd(a, b);
    return (a*b)/g;
}

void solve(){
    ll n, i;
    cin>>n;
    vl v(n+2, 1), b(n+2);
    for(i=1; i<=n; i++){
        cin>>v[i];
    }
    for(i=1; i<=n+1; i++){
        b[i]=lcm(v[i], v[i-1]);
    }
    for(i=1; i<=n; i++){
        if(__gcd(b[i], b[i+1])!=v[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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